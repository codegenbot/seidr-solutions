n, m = int(input()), int(input())
print(sum([i*(n-i)/n/m for i in range(1, n)]).__round__(5))