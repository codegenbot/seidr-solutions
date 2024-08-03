Here is the Python solution for the problem:

def basement(numbers):
    for i in range(len(numbers)):
        total = sum(numbers[:i+1])
        if total < 0:
            return i
    return -1