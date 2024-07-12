numbers = list(map(int, input().split()))
total = sum((num // 3 - 2) if num >= 6 else 0 for num in numbers)
print(total)