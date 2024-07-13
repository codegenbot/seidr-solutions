Here is the Python solution for the problem:

def basement(vector):
    total_sum = 0
    for i in range(len(vector)):
        total_sum += vector[i]
        if total_sum < 0:
            return i
    return -1