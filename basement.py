Here is the solution:

def basement(v):
    total = 0
    for i, x in enumerate(v):
        if total < 0:
            return i
        total += x