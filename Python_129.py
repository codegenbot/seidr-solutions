def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    queue = [(0, 0, [grid[0][0]])]
    result = None
    while queue:
        x, y, path = queue.pop(0)
        if len(path) > k or any(val == grid[x][y] for val in path):
            continue
        visited[x][y] = True
        new_path = path + [grid[x][y]]
        if len(new_path) == k:
            result = new_path if result is None else min(result, new_path)
            break
        queue.extend([(x-1, y, new_path) if x > 0 and not visited[x-1][y] 
                       else [(x+1, y, new_path) if x < n-1 and not visited[x+1][y] 
                            else [(x, y-1, new_path) if y > 0 and not visited[x][y-1] 
                                 else [(x, y+1, new_path) if y < n-1 and not visited[x][y+1] 
                                      else []]]])
    return result