total = sum(int(int(num) // 3 - 2) + (int(num) % 3 > 0) for num in input().split())
print(total)