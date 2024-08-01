Here is the solution:

def basement(input):
    for i in range(len(input)):
        if sum(input[:i+1]) < 0:
            return i
    return -1