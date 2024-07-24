def roll_probability(n, m):
    return (n - 1) / (n * m)


n = int(input())
m = int(input())

print(roll_probability(n, m))