nums = list(map(int, input().split()))
total = sum(nums[i] // 3 - 2 for i in range(len(nums)))
print(total)