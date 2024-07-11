total = sum(max(0, num // 3 - 2) for num in map(int, input().split()))
print(total)