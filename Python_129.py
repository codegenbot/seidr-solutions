def minPath(grid):
    n = len(grid)
    res = []
    total = sum(grid[0])
    if total < min([sum(grid[i]) for i in range(1, n)]):
        res = [[0]]
    else:
        for i in range(n):
            temp_total = 0
            for j in range(i + 1, n):
                temp_total += grid[j][i]
                if total == temp_total or (res and temp_total < min([sum(grid[y][i] for y in range(z, z+k)]) for k, z in res]):
                    if not res or temp_total < min([sum(grid[y][i] for y in range(z1, z2)) for z1, z2 in res]):
                        res = [[i]]
                    elif temp_total == min([sum(grid[y][i] for y in range(z1, z2)) for z1, z2 in res]):
                        res.append([i])
                else:
                    break
    return sorted(res)