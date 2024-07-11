total = sum(max(int(int(num) // 3) - 2, 0) for num in input().split())
print(total)