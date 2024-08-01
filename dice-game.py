n = int(input())
m = int(input())
print(round(sum([(i+1) / n * (m-i) / m for i in range(n-1)]) / n, 2)