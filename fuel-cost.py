numbers = input().split()
total = 0
for num in numbers:
    total += max(0, int(num) // 3 - 2)
print(total)