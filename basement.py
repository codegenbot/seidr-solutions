Here is a Python solution for the problem:

def basement(arr):
    total = 0
    for i, x in enumerate(arr):
        total += x
        if total < 0:
            return i