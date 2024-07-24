Here is the Python code to solve the problem:

def basement(input_vector):
    for i in range(len(input_vector)):
        if sum(input_vector[:i+1]) < 0:
            return i
    return -1