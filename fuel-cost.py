nums = list(map(int, input().split()))
total = sum((num // 3) - 2 for num in nums)
print(total)