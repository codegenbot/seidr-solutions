numbers = list(map(int, input().split()))
total = sum((num // 3 - 2) if num >= 7 else 0 for num in numbers) + sum(
    num // 3 for num in numbers if num < 7
)
print(total)