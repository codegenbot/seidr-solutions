def findShortestWay(matrix, keywords):
    n = len(matrix)
    memo = {}
    
    def dfs(i, j, path, cnt, keywordIndex):
        if (i, j) in memo:
            return memo[(i, j)]
        
        if cnt == len(keywords):
            return path
        
        res = []
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and matrix[ni][nj] == keywords[keywordIndex]:
                res.append(dfs(ni, nj, path + [matrix[ni][nj]], cnt + 1, keywordIndex + 1))
        
        memo[(i, j)] = min(res, key=lambda x: len(x) if len(x) == len(keywords) else float('inf'))
        return memo[(i, j)]
    
    return dfs(0, 0, [], 0, 0)[1:]