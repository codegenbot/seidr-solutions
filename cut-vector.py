def cut_vector(vector):
    n = len(vector)
    dp = [[0] * (n+1) for _ in range(n+1)]
    for i in range(1, n+1):
        for j in range(i+1, n+1):
            if vector[j-1] - vector[i-1] == 0:
                dp[i][j] = max(dp[i][j-1], dp[i+1][j])
            else:
                dp[i][j] = min(dp[i][j-1], dp[i+1][j])
    return dp[1][n]

def main():
    vector = [int(x) for x in input().split()]
    result = cut_vector(vector)
    print(" ".join([str(x) for x in result]))

if __name__ == "__main__":
    main()