nums = list(map(int, input().split()))
total = sum(max(0, x // 3 - 2) for x in nums)
print(total)