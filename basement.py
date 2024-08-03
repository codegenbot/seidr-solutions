Here is the Python solution:

def basement_index(nums):
    total = 0
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            return i
    return -1