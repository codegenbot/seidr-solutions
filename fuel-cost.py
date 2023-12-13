nums = list(map(int, input().split()))
total = sum(round(num / 3) - 2 for num in nums)
print(total)