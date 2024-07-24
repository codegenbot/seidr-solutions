numbers = input().split()
total = sum(max(0, int(number) // 3 - 2) for number in numbers)
print(total)