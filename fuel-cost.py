total = 0
for num in map(int, input().split()):
    total += max(0, num // 3 - 2)
print(total)