arr = list(map(int, input().split()))
total = sum([max(0, num // 3 - 2) for num in arr])
print(total)