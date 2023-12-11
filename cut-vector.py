def get_cut_vector(vec):
    # Find the spot where, if you cut the vector, the numbers on both sides are either equal, or the difference is as small as possible
    n = len(vec)
    dp = [[0] * (n + 1) for _ in range(n + 1)]
    for i in range(1, n + 1):
        for j in range(i + 1, n + 1):
            dp[i][j] = min(dp[i][k] + dp[k][j], dp[i][j - 1] + vec[j - 1])
    return dp[n][0]

def main():
    # Read input from stdin
    n = int(input())
    vec = list(map(int, input().split()))
    
    # Call the function to get the cut vector
    result = get_cut_vector(vec)
    
    # Print the output
    print(*result, sep="\n")

if __name__ == "__main__":
    main()