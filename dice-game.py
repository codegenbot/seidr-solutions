n = int(input())
m = int(input())
print(round(sum(1 / (n * m) * (i // n) for i in range(n, n * m)), 2))