def minPath(grid, k):
    N = len(grid)
    queue = [(0, 0, [])]
    res = float('inf')
    path_set = set()
    while queue:
        row, col, path = queue.pop(0)
        if len(path) == k:
            current_sum = sum(map(int, path))
            if current_sum < res:
                res = current_sum
                path_set = {tuple(path)}
            elif current_sum == res:
                path_set.add(tuple(path))
        else:
            for dr, dc in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                nr, nc = row + dr, col + dc
                if 0 <= nr < N and 0 <= nc < N:
                    queue.append((nr, nc, path + [grid[nr][nc]]))
    return [[i for i in p] for p in path_set]