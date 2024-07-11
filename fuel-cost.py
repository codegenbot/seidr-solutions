values = list(map(int, input().split()))
total = sum(value // 3 - 2 for value in values)
print(total)