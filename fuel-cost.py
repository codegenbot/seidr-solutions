n = int(input())
total = 0
for _ in range(n):
    num = int(input())
    total += max(num // 3 - 2, 0)
print(total)