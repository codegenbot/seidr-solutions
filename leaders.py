Here is the Python solution for the problem:

def leaders(a):
    n = len(a)
    return [a[i] for i in range(n-1, -1, -1) if a[i] >= min(a[i+1:])]