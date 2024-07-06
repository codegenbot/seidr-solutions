```
def minSubArraySum(nums):
    min_sum = float('inf')
    window_sum = 0
    
    for num in nums:
        window_sum += num
        
        if window_sum < min_sum:
            min_sum = window_sum
            
    return min_sum

input_num = input("Enter space-separated integers: ")
nums = [int(x) for x in input_num.split()]
print(minSubArraySum(nums))