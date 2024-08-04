def dfs(x, y, path, path_sum, visited):
    visited.add((x, y, path_sum))

    if path_sum > k:
        visited.remove((x, y, path_sum))
        return [float("inf")]

    min_path = [float("inf")]

    for dx, dy in directions:
        nx, ny = x + dx, y + dy
        if 0 <= nx < n and 0 <= ny < n and grid[nx][ny] < path[-1] and (nx, ny, path_sum + grid[nx][ny]) not in visited:
            min_path = min(min_path, dfs(nx, ny, path + [grid[nx][ny]], path_sum + grid[nx][ny], visited), key=len)

    visited.remove((x, y, path_sum))
    return min_path