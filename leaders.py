Here is the Python solution for the given problem:

def leaders(vector):
    return [v for i, v in reversed(list(enumerate(vector))) if all(v >= vector[j] for j in range(i+1, len(vector)))]