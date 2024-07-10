Here is the solution in Python:

def leaders(input):
    return [x for i, x in enumerate(reversed(input)) if all(x >= y for y in input[i+1:])]