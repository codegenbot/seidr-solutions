```
def find_closest_elements(nums, target):
    left, right = 0, len(nums) - 1
    while left < right:
        mid = (left + right) // 2
        if nums[mid] == target:
            return [nums[mid], nums[mid]]
        elif nums[mid] < target:
            left = mid + 1
        else:
            right = mid
    if target - nums[left] <= nums[right] - target:
        return [nums[left], nums[right]]
    return [nums[right], nums[right]]