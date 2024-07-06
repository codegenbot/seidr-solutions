```
def minPath(grid, k):
    N = len(grid)
    visited = set()
    queue = [(0, 0, [])]  # (row, col, path)

    shortest_path = []

    while queue:
        row, col, path = queue.pop(0)

        if not shortest_path or len(path) < len(shortest_path):
            shortest_path = path

        if len(path) == k:
            return path

        for dr, dc in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nr, nc = row + dr, col + dc

            if 0 <= nr < N and 0 <= nc < N and (nr, nc) not in visited:
                queue.append((nr, nc, path + [grid[nr][nc]]))
                visited.add((nr, nc))

    return shortest_path