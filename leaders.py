Here is the Python solution for the problem:

def leaders(v):
    return [x for i,x in reversed(list(enumerate(v))) if all(x>=y for y in v[i+1:])]