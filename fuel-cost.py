values = input().split()
total = sum((int(x) // 3 - 2) for x in values)
print(total)