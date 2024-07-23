```
def basement(nums):
    sum = 0
    index = 0
    for num in nums:
        sum += num
        if sum < 0:
            return index
        index += 1
    return -1