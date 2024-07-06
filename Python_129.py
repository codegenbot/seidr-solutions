
import heapq

def minPath(grid, k):
    # Initialize variables
    n = len(grid)
    m = len(grid[0])
    visited = [[False for _ in range(m)] for _ in range(n)]
    queue = [(grid[0][0], 0, 0)]
    min_path = []
    # Breadth-first search
    while queue:
        value, x, y = heapq.heappop(queue)
        if visited[x][y]:
            continue
        visited[x][y] = True
        min_path.append(value)
        if len(min_path) == k:
            return min_path
        for dx, dy in [(1, 0), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < m:
                heapq.heappush(queue, (grid[nx][ny], nx, ny))
    return min_path