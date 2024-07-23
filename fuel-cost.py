n = int(input())
total = 0
for x in map(int, input().split()):
    total += max(0, x // 3 - 2)
print(total)