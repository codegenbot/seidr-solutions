numbers = [int(x) for x in input().split()]
total = sum((num // 3) - 2 for num in numbers)
print(total)