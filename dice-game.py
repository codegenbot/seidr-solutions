n, m = map(int, input().split())
print(sum([(n - i) / n * i / m for i in range(1, m)]).__round__(9))