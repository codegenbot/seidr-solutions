```
def basement(nums):
    cum_sum = 0
    i = 1
    while i < len(nums):
        if cum_sum <= 0:
            cum_sum += nums[i-1]
        else:
            cum_sum += -nums[i-1]  
        if cum_sum < 0:
            return i        
        i += 1