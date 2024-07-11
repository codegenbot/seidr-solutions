numbers = list(map(lambda x: max(0, int(x/3) - 2), input().split()))
total = sum(numbers)
print(total)