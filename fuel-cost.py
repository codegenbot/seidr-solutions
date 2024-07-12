n = list(map(int, input().split()))
total = 0
for num in n:
    total += max(0, num // 3 - 2)
print(total)