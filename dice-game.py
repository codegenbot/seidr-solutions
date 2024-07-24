n, m = map(int, input().split())
print(sum([(n - i) * i / (n * m) for i in range(1, n)]).__round__(5))