def minPath(grid, k):
    n = len(grid)
    path = []
    
    while k > 0:
        idx = min(range(n), key=lambda x: grid[x // n][x % n])
        path.append(grid[idx // n][idx % n])
        grid[idx // n][idx % n] += 1
        k -= 1

    return path