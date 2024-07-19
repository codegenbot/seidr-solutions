import heapq

def minPath(grid, k):
    path = []
    n = len(grid)
    m = len(grid[0])
    visited = set()

    pq = [(grid[0][0], 0, 0)]

    while pq and len(path) < k:
        cost, row, col = heapq.heappop(pq)

        if (row, col) in visited:
            continue

        path.append(cost)
        visited.add((row, col))

        for dr, dc in [(0, 1), (1, 0)]:
            new_row, new_col = row + dr, col + dc

            if (
                0 <= new_row < n
                and 0 <= new_col < m
                and (new_row, new_col) not in visited
            ):
                heapq.heappush(pq, (grid[new_row][new_col], new_row, new_col))

    return path

grid = []
n, m = map(int, input().split())
for _ in range(n):
    row = list(map(int, input().split()))
    grid.append(row)

k = int(input())

result = minPath(grid, k)
print(result)