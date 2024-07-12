def minPath(grid, k):
    n = len(grid)
    seen = set()
    path = []

    def dfs(x, y, curr_path):
        nonlocal seen
        if len(curr_path) == k:
            return curr_path
        val = grid[x][y]
        new_path = curr_path + [val]
        key = str(new_path)
        if key in seen:
            return None
        seen.add(key)
        min_path = None
        for dx, dy in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n:
                p = dfs(nx, ny, new_path)
                if p is not None and (min_path is None or p < min_path):
                    min_path = p
        return min_path

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [])
            if path is not None:
                return path