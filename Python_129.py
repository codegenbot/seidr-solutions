def minPath(grid, k):
    n = len(grid)
    seen = set()
    queue = [(0, i) for i in range(n * n)]
    path = []
    
    while queue and len(path) < k:
        val, cell = queue.pop(0)
        if len(path) + 1 > k:
            continue
        if val not in seen:
            seen.add(val)
            path.append(val)
            for x, y in [(cell - 1, cell % n), (cell + 1, cell % n), 
                          (n * n + cell - n, (cell - 1) % n), 
                          (n * n + cell + n, (cell + 1) % n)]:
                if 0 <= x < n and y in range(n):
                    queue.append((val, y))
    return path