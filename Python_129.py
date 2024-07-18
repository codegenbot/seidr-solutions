def minPath(grid, k):
    n = len(grid)
    pos = min((i, j) for i in range(n) for j in range(n))
    path = [grid[pos[0]][pos[1]]
    
    seen = {(pos[0], pos[1]): 0}
    cycles = []
    
    for _ in range(k - 1):
        i, j = pos
        next_pos = min(
            (x, y)
            for x in range(max(0, i - 1), min(n, i + 2))
            for y in range(max(0, j - 1), min(n, j + 2))
        )
        if next_pos in seen:
            cycle_start = seen[next_pos]
            cycle_length = len(path) - cycle_start
            cycle_values = path[cycle_start:]
            remaining_steps = k - cycle_start
            remaining_values = cycle_values * (remaining_steps // cycle_length)
            path = path[:cycle_start] + remaining_values
            break
        
        path.append(grid[next_pos[0]][next_pos[1]])
        pos = next_pos
        seen[pos] = len(path)
    
    return path