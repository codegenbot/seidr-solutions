def dfs(i, j, path):
    if len(path) > k:
        return None

    if len(path) == k:
        return path
        
    visited.add((i, j))
    for dx, dy in directions:
        x, y = i + dx, j + dy
        if 0 <= x < N and 0 <= y < N and (x, y) not in visited:
            new_path = dfs(x, y, path + [grid[x][y]])
            if new_path:
                return new_path

    visited.remove((i, j))