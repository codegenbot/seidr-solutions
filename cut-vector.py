```python
def cut_vector(nums):
    total_sum = sum(nums)
    left_sum = 0
    min_diff = float('inf')
    cut_index = -1
    
    for i, num in enumerate(nums[:-1]):
        left_sum += num
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)
        
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    
    return nums[:cut_index+1], nums[cut_index+1:]

# Read input
nums = []
for _ in range(2):
    nums.append(int(input()))
    
# Call the function and print the resulting subvectors
subvector1, subvector2 = cut_vector(nums)
for num in subvector1:
    print(num)
print()
for num in subvector2:
    print(num)
```
Note: The code assumes that the input consists of two positive integers separated by newlines.