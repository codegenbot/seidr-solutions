n, m = int(input()), int(input())
print(sum([(n-i)/n * i/m for i in range(1, m)]).__round__(5))