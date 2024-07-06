def minPathSum(m):
    n = len(m)
    for i in range(n):
        for j in range(len(m[i])):
            if i == 0:
                m[i][j] += j
            elif j == 0:
                m[i][j] += m[i-1][j]
            else:
                m[i][j] += min(m[i-1][j], m[i][j-1])
    return min(row[-1] for row in m)