Here is the Python solution for the problem:

def basement(vector):
    total = 0
    for i in range(len(vector)):
        if total < 0:
            return i
        total += vector[i]
    return -1