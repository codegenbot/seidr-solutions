Here is the solution:

def basement(v):
    total = 0
    for i, num in enumerate(v):
        total += num
        if total < 0:
            return i
    return -1