def dice_game(n, m):
    def gcd(a, b):
        while b:
            a, b = b, a % b
        return a
    total_outcomes = n * m
    peters_wins = sum(i > j for i in range(1, n+1) for j in range(1, m+1)) + (n * m // gcd(n, m))
    return peters_wins / total_outcomes