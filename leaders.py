Here is the Python code for the problem:

def leaders(vector):
    return [v for i, v in enumerate(reversed(vector)) if all(v >= vector[i+1:])]