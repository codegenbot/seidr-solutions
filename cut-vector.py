```
def cut_vector(nums):
    n = len(nums)
    min_diff = float('inf')
    pos = 0
    
    for i in range(1, n):
        left_sum = sum(nums[:i])
        right_sum = sum(nums[i:])
        
        if left_sum == right_sum:
            return (nums[:i], nums[i:])
        elif abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            pos = i
            
    left_sum = sum(nums[:pos])
    right_sum = sum(nums[pos:])
    
    if left_sum == right_sum:
        return (nums[:pos], nums[pos:])
    else:
        return (nums[:pos], nums[pos:])

print(cut_vector([1, 0]))
print(cut_vector([1, 10]))
print(cut_vector([1, 100]))
print(cut_vector([1, 1000]))
print(cut_vector([1, 10000]))