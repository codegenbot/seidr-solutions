Here is the Python solution for the problem:

def basement(numbers):
    total_sum = 0
    for i, num in enumerate(numbers):
        total_sum += num
        if total_sum < 0:
            return i
    return -1