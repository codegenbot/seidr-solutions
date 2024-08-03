Here is the Python solution for the problem:

def basement(nums):
    total = 0
    for i in range(len(nums)):
        total += nums[i]
        if total < 0:
            return i