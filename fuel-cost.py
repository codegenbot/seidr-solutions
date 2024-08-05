inputs = input().split()
total = 0
for x in inputs:
    total += max(int(x) // 3 - 2, 0)
print(total)