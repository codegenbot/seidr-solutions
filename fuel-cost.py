total = 0
for x in map(int, input().split()):
    total += max(x // 3 - 2, 0)
print(total)