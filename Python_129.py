import heapq

def minPath(grid, k):
    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    
    def neighbors(x, y):
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                yield nx, ny
    
    pq = []
    for i in range(N):
        for j in range(N):
            heapq.heappush(pq, (grid[i][j], i, j, [grid[i][j]]))
    
    while pq:
        val, x, y, path = heapq.heappop(pq)
        if len(path) == k:
            return path
        for nx, ny in neighbors(x, y):
            heapq.heappush(pq, (grid[nx][ny], nx, ny, path + [grid[nx][ny]]))