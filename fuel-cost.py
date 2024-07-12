nums = list(map(int, input().split()))
total = sum(max(num // 3 - 2, -2) for num in nums)
print(total)