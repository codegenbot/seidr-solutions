total = 0
for num in map(int, input().split()):
    total += max(num // 3 - 2, 0)
print(total)