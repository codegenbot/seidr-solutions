def cut_vector(vector):
    # Find the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible.
    n = len(vector)
    dp = [[0] * (n + 1) for _ in range(n + 1)]
    for i in range(1, n + 1):
        for j in range(i + 1, n + 1):
            dp[i][j] = min(dp[i][k] + dp[k][j] for k in range(i, j))
    return dp[1][n]

def main():
    vector = [int(x) for x in input().split()]
    result = cut_vector(vector)
    print(*result)

if __name__ == "__main__":
    main()