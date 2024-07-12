numbers = list(map(int, input().split()))
total = sum(max(num // 3 - 2, 0) for num in numbers)
print(total)