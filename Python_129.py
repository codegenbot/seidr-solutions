def minPath(grid, k):
    N = len(grid)
    n_values = [i for row in grid for i in row]
    n_values.sort()
    path = []
    for _ in range(k):
        x, y = 0, 0
        while True:
            neighbors = [(x-1, y), (x+1, y), (x, y-1), (x, y+1)]
            for dx, dy in neighbors:
                if 0 <= dx < N and 0 <= dy < N:
                    neighbor_value = grid[dx][dy]
                    path.append(neighbor_value)
                    x, y = dx, dy
                    break
    return path