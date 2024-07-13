n = int(input())
total = 0
for i in range(n):
    x = int(input())
    total += max(x // 3 - 2, 0)
print(total)