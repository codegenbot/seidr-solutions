Here is the Python code for the problem:

def leaders(a):
    return [a[i] for i in range(len(a)-1,-1,-1) if a[i] >= max(a[i+1:])]