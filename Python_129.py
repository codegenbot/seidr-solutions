```
def minPath(grid, k):
    N = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    visited = set()
    queue = [(grid[0][0], [grid[0][0]])]  # Add a closing square bracket
    while queue:
        value, path = queue.pop(0)
        if len(path) == k:
            return path
        for dx, dy in directions:
            x, y = (x + dx) % N, (y + dy) % N
            new_value = grid[x][y]
            if new_value not in visited and value < new_value:
                queue.append((new_value, path + [new_value]))
                visited.add(new_value)
    return []