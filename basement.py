Here is the Python solution for the given problem:

def basement(vector):
    total_sum = 0
    for i in range(len(vector)):
        if total_sum < 0:
            return i
        total_sum += vector[i]
    return -1