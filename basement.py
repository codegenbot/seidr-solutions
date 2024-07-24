Here is the Python solution for the given problem:

def basement(nums):
    for i in range(len(nums)):
        if sum(nums[:i+1]) < 0:
            return i