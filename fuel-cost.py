nums = list(map(int, input().split()))
total = sum((num // 3) - 2 + num for num in nums)
print(total)