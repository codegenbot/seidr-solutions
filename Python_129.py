def minPath(grid, k):
    n = len(grid)
    start = min(min(row) for row in grid)
    result = [start]
    seen = {(i, j) for i in range(n) for j in range(n) if grid[i][j] == start}
    
    while len(result) <= k:
        neighbors = []
        for i, j in seen:
            for x, y in [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]:
                if 0 <= x < n and 0 <= y < n and (x, y) not in seen:
                    neighbors.append((x, y))
        
        next_cell = min(neighbors, key=lambda x: grid[x[0]][x[1]])
        result.append(grid[next_cell[0]][next_cell[1]])
        seen.add(next_cell)
    
    return result