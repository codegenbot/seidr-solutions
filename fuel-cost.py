numbers = list(map(int, input().split()))
total = sum(((num + 1) // 3) for num in numbers)
print(total)