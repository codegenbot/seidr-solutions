def find_leaders(nums):
    leaders = []
    for i in range(len(nums)):
        if i == len(nums) - 1 or nums[i] >= max(nums[i+1:]):
            leaders.append(nums[i])
    return leaders

n = int(input())
nums = []
for _ in range(n):
    nums.append(int(input()))

result = find_leaders(nums)
for num in result:
    print(num)