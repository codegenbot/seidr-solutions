Here is the Python solution for the problem:

def leaders(arr):
    return [x for i, x in enumerate(reversed(arr)) if all(x >= y for j, y in enumerate(reversed(arr), start=i+1))]