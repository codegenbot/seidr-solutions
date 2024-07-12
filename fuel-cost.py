numbers = list(map(int, input().split()))
total = sum((num // 3 - 2) if num >= 7 else (num // 3) for num in numbers)
print(total)