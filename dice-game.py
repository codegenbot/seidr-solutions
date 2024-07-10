n = int(input())
m = int(input())

p = 0.0
for i in range(1, n + 1):
    for j in range(1, m + 1):
        if i > j:
            p += 1
p /= n * m
print(p)