def find_leaders(nums):
    leaders = []
    for i in range(len(nums)):
        if i == len(nums) - 1 or nums[i] >= max(nums[i+1:]):
            leaders.append(nums[i])
    return leaders

# Read input from user
n = int(input())
nums = []
for _ in range(n):
    nums.append(int(input()))

# Find leaders
result = find_leaders(nums)

# Print output
for num in result:
    print(num)