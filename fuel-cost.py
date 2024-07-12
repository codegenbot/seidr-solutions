numbers = list(map(int, input().split()))
total = sum((num // 3) - 2 for num in numbers) + len(numbers) * 2
print(total)