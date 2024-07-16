n = int(input())
m = int(input())
print(round(sum(1 for x in range(1, n+1) for y in range(1, m+1) if x > y) / (n * m), 2)