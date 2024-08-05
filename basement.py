Here is the solution:

def basement(input):
    total = 0
    for i, x in enumerate(input):
        total += x
        if total < 0:
            return i
    return -1