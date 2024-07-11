```
import random

def minPath(m, k):
    k = 10
    n = 4
    
    m = [[random.randint(0, 100) for j in range(n)] for i in range(n)]
    
    def dfs(i, j, path, visited, m, k):
        if len(path) == k:
            return sum(path)
        visited.add((i, j))
        min_path = None
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = dfs(ni, nj, path + [m[ni][nj]], visited.copy(), m, k)
                if min_path is None or new_path < min_path:
                    min_path = new_path
        return min_path

    min_path = None
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [], set(), m, k)
            if min_path is None or path < min_path:
                min_path = path
    return min_path

print(minPath(None, None))