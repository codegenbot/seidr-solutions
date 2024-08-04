Here is the Python solution:

def basement_index(nums):
    total = 0
    for i, num in enumerate(nums):
        if total < 0:
            return i
        total += num
    return -1