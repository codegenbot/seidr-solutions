```python
def cut_vector(nums):
    total_sum = sum(nums)
    left_sum = 0
    right_sum = total_sum
    min_diff = float('inf')
    split_index = -1
    
    for i in range(len(nums)):
        left_sum += nums[i]
        right_sum -= nums[i]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    
    return nums[:split_index+1], nums[split_index+1:]
```