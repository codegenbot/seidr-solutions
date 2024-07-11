def find_pair(n, nums):
    nums.sort()
    for i in range(len(nums)-1):
        if nums[i+1] + nums[i] == n:
            return f"{nums[i]} {nums[i+1]}"
    return "No pair found"

n = int(input())
print(find_pair(n, [int(x) for x in input().split()]))