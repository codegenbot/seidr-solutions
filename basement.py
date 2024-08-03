Here is the solution:

def basement(lst):
    total = 0
    for i, num in enumerate(lst):
        total += num
        if total < 0:
            return i
    return None