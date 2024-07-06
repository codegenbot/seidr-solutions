```
def minPath(grid, k):
    n = len(grid)
    m = [[0 for _ in range(n)] for _ in range(n)]
    
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                m[i][j] = 1
            else:
                m[i][j] = float('inf')
                
    min_path = []
    current_value = 1
    while k > 0:
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        for i in range(n):
            for j in range(n):
                if m[i][j] == current_value:
                    for d in directions:
                        ni, nj = i + d[0], j + d[1]
                        if 0 <= ni < n and 0 <= nj < n and m[ni][nj] > current_value:
                            m[ni][nj] = float('inf')
        min_dir = None
        for i in range(n):
            for j in range(n):
                if m[i][j] == float('inf'):
                    m[i][j] = 0
                    break
            else:
                continue
            break
        ni, nj = i, j
        while k > 0 and m[ni][nj] != float('inf'):
            min_path.append(current_value)
            current_value += 1
            k -= 1
            directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
            for d in directions:
                ni2, nj2 = ni + d[0], nj + d[1]
                if 0 <= ni2 < n and 0 <= nj2 < n and m[ni2][nj2] > current_value - 1:
                    ni, nj = ni2, nj2
        return min_path