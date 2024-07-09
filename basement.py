Here is the Python solution for the given problem:

def basement(vector):
    total_sum = 0
    index = 0
    while True:
        total_sum += vector[index]
        if total_sum < 0:
            return index
        index += 1