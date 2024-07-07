Here is the solution:

def minPath(grid, k):
    n = len(grid)
    m = [(i, j) for i in range(n) for j in range(n)]
    for i in range(n):
        for j in range(n):
            grid[i][j] -= 1
    queue = [(0, [grid[0][0]], [grid[0][0]])]
    visited = set((0, 0))
    while queue:
        (i, path), lst_path = heapq.heappop(queue)
        if len(lst_path) == k:
            return lst_path
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            ni, nj = i + dx, j + dy
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                visited.add((ni, nj))
                heapq.heappush(queue, ((ni, path + [(ni, nj)]), lst_path + [grid[ni][nj]]))
    return []