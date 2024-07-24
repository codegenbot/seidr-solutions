n, m = int(input()), int(input())
print(sum([(n-i)/n * i/m for i in range(1, m+1)]).__round__(5))