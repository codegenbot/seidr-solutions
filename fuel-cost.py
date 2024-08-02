values = input().split()
total = sum(max(int(x) // 3 - 2, 0) for x in values)
print(total)