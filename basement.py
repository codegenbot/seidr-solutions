Here is the solution:

def basement(lst):
    total = 0
    for i, n in enumerate(lst):
        total += n
        if total < 0:
            return i