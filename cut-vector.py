def cut_vector(vector):
    # Find the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible.
    n = len(vector)
    dp = [[0] * (n + 1) for _ in range(n)]
    for i in range(1, n):
        for j in range(i + 1, n + 1):
            if vector[j - 1] == vector[i - 1]:
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1)
            else:
                dp[i][j] = max(dp[i][j], dp[i - 1][j])
    # Return the two resulting subvectors as two outputs.
    result1 = []
    result2 = []
    i, j = n, n + 1
    while i > 0 and j > 0:
        if dp[i - 1][j] == dp[i][j - 1]:
            result1.append(vector[i - 1])
            result2.append(vector[j - 1])
            i -= 1
            j -= 1
        elif dp[i - 1][j] > dp[i][j - 1]:
            result1.append(vector[i - 1])
            i -= 1
        else:
            result2.append(vector[j - 1])
            j -= 1
    return [result1, result2]