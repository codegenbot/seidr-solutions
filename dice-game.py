m, n = int(input()), int(input())
print(sum([(m-i)/m * i/n for i in range(1, n+1)]).__round__(5))