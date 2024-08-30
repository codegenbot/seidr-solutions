Here is a possible solution in Python:

def basement(lst):
    total = 0
    for i, x in enumerate(lst):
        total += x
        if total < 0:
            return i