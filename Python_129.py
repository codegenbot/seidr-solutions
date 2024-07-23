def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == k:
                stack = [(i, j)]
                visited = [[False]*n for _ in range(n)]
                path = [str(i) + ',' + str(j)]
                while stack:
                    x, y = stack.pop()
                    if visited[x][y]:
                        continue
                    visited[x][y] = True
                    path.append(str(x) + ',' + str(y))
                    if (x == 0 and y == 0):
                        res = [' '.join(path)]
                        break
                    elif x > 0:
                        stack.append((x-1, y))
                    elif x < n-1:
                        stack.append((x+1, y))
                    elif y > 0:
                        stack.append((x, y-1))
                    else:
                        stack.append((x, y+1))
                if res:
                    return [int(i) for i in res[0].split(',')]