```
def minSubArraySum(*nums):
    if not nums:
        return 0
    min_sum = float('inf')
    window_sum = current_sum = sum(nums)
    for num in nums:
        current_sum = max(current_sum - num, 0) + num
        min_sum = min(min_sum, current_sum)
    return min_sum

input_num = input("Enter space-separated integers: ")
nums = [int(x) for x in input_num.split()]
print(minSubArraySum(*nums))