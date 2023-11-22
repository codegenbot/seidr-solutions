nums = list(map(int, input().split()))
print(sum(num // 3 for num in nums) - 2 * len(nums))