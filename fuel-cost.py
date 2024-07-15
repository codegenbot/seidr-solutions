n = input().split()
total = sum([max(0, int(num) // 3 - 2) for num in n])
print(total)