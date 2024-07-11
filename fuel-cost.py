total = sum(max(0, int(num) // 3 - 2) for num in input().split())
print(total)