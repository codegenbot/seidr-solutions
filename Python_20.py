def find_closest_elements(nums, k, x):
    result = []
    left = 0
    right = len(nums) - k
    
    while left < right:
        mid = (left + right) // 2
        if x - nums[mid] > nums[mid+k] - x:
            left = mid + 1
        else:
            right = mid
    
    for i in range(left, left + k):
        result.append(nums[i])
    
    return result