N = int(input())
grid = [[input() for _ in range(N)]]
k = int(input())
print(minPath(grid[0], k))