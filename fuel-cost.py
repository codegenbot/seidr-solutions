values = list(map(int, input().split()))
total = 0
for x in values:
    total += max(0, x // 3 - 2)
print(total)