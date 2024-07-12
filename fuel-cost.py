numbers = list(map(int, input().split()))
total = 0
for x in numbers:
    total += max(x // 3 - 2, 0)
print(total)