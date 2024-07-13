Here is the solution:

def basement_index(arr):
    total_sum = 0
    for i, num in enumerate(arr):
        total_sum += num
        if total_sum < 0:
            return i
    return -1