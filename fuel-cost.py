n = int(input())
total = 0
for _ in range(n):
    num = int(input())
    total += max(0, num // 3 - 2)
print(total)