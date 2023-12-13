nums = list(map(int, input().split()))

total = sum((num - 2) // 3 for num in nums)

print(total)