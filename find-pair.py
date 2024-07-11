```
n = int(input())
nums = [int(x) for x in input().split()]
nums.sort()
for i in range(len(nums)-1):
    if nums[i+1] + nums[i] == n:
        print(f"{nums[i]} {nums[i+1]}")
print("No pair found")