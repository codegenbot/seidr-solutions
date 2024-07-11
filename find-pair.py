def find_pair(n, nums):
    left, right = 0, len(nums)-1
    while left < right:
        total = nums[left] + nums[right]
        if total == n:
            return f"{nums[left]} {nums[right]}"
        elif total < n:
            left += 1
        else:
            right -= 1
    return "No pair found"

n = int(input())
print(find_pair(n, [int(x) for x in input().split()]))