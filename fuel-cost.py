numbers = list(map(int, input().split()))
total = sum((num // 3) - 2 for num in numbers)
if total < 0:
    total = 0
print(total)