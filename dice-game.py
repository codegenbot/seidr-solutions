n = int(input())
m = int(input())
result = 0.0
for i in range(1, n + 1):
    for j in range(1, m):
        if i > j:
            result += 1
result /= n * m
print("{:.2f}".format(result))