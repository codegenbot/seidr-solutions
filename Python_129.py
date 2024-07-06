def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    visited = set()
    queue = deque([(0, 0, 1)])
    min_path = []

    while queue:
        i, j, path = queue.popleft()
        if (i, j) in visited:
            continue
        visited.add((i, j))
        if len(min_path) < k:
            min_path.append(grid[i][j])
        else:
            break
        for ni, nj in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= ni < n and 0 <= nj < m and (ni, nj) not in visited:
                queue.append((ni, nj, path + 1))
    return min_path