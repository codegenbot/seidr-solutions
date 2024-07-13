n = int(input())
m = int(input())
print(round(sum([(n - i) / n / m for i in range(1, n)]), 2))