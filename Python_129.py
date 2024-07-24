def minPath(grid, k):
    N = len(grid)
    res = []
    for i in range(N):
        for j in range(N):
            if grid[i][j] == 1:
                stack = [(i, j, [grid[i][j]])]
                visited = {(i, j)}
                while stack and len(stack[0][2]) < k + 1:
                    x, y, path = stack.pop(0)
                    for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                        nx, ny = x + dx, y + dy
                        if 0 <= nx < N and 0 <= ny < N and (nx, ny) not in visited:
                            stack.append(((nx, ny), path + [grid[nx][ny]]))
                            visited.add((nx, ny))
                if len(stack[0][2]) == k + 1:
                    res = stack[0][2]
                    break
    return res