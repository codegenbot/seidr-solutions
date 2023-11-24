import numpy as np

def cut_vector(nums):
    total_sum = sum(nums)
    half_sum = total_sum // 2
    
    current_sum = 0
    for i, num in enumerate(nums):
        current_sum += num
        if current_sum == half_sum or current_sum == half_sum + num:
            return nums[:i+1], nums[i+1:]
    
    return nums, [0]

# Read the input from the user
nums = []
while True:
    try:
        num = int(input())
        nums.append(num)
    except:
        break

# Call the function and print the results
subvector1, subvector2 = cut_vector(nums)
print('\n'.join(map(str, subvector1)))
print('\n'.join(map(str, subvector2)))