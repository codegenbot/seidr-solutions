numbers = list(map(int, input().split()))
total = sum((num // 3 - 2) if num >= 6 else num for num in numbers)
print(total)