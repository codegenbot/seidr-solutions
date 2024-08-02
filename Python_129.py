def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    queue = [(0, 0, [])]
    visited[0][0] = True
    min_path = None
    while queue:
        x, y, path = queue.pop(0)
        if len(path) == k:
            if min_path is None or path < min_path:
                min_path = "".join(map(str, path))
    return min_path