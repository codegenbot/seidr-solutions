n, m = [int(input()) for _ in range(2)]
print(sum([(n-i)/n * 1/m for i in range(1, n)]).__round__(5))