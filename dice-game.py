def roll_prob(n, m):
    return (n - m) / (n + m - 1)


n = int(input())
m = int(input())

print(roll_prob(n, m))