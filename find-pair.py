def find_pair(n, nums):
    nums.sort()
    left = 0
    right = len(nums) - 1
    while left < right:
        total = nums[left] + nums[right]
        if total == n:
            return f"{nums[left]} {nums[right]}"
        elif total < n:
            left += 1
        else:
            right -= 1