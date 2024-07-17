Here is the Python solution:

def basement(input_vector):
    for i in range(len(input_vector)):
        current_sum = sum(input_vector[:i+1])
        if current_sum < 0:
            return i
    return -1