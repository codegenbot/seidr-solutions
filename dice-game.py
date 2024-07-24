n, m = int(input()), int(input())
print(round(sum([(n-i)/n * sum([j/m for j in range(1, m)]) for i in range(1, n)]), 5)