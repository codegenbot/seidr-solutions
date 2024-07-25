n = int(input())
m = int(input())
if n > m:
    result = sum([(n - i) / n for i in range(1, m)]) / m
else:
    result = sum([(n - i) / n for i in range(1, n)]) / n
print(round(result, 2))