```
def cut_vector(nums):
    left = right = 0
    min_diff = float('inf')
    for i in range(1, len(nums)):
        diff = abs(left - right)
        if diff < min_diff:
            min_diff = diff
            break
        left += nums[i-1]
        right += nums[i]
    return [nums[:left]], [nums[left:]]