numbers = list(map(int, input().split()))
total = sum((int(num / 3) - 2) for num in numbers)
print(total)