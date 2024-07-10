Here is the solution:

def basement(input):
    total = 0
    for i, num in enumerate(input):
        if total < 0:
            return i
        total += num
    return -1