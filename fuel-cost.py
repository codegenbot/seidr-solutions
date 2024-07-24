n = map(int, input().split())
total = 0
for x in n:
    total += max(0, x // 3 - 2)
print(total)