```
input_num = input("Enter space-separated integers: ")
nums = [int(x) for x in input_num.split()]
print(minSubArraySum(*nums))

def minSubArraySum(*nums):
    total_sum = sum(nums)
    if total_sum <= 0:
        return total_sum
    total_sum = 0
    min_sum = float('inf')
    window_sum = 0
    
    for num in nums:
        total_sum += num
        
        if window_sum < min_sum:
            min_sum = window_sum
            
        if window_sum > total_sum - num:
            window_sum = num
        else:
            window_sum += num
    
    return min_sum