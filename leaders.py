Here is the Python solution for the problem:

def leaders(arr):
    return [x for i,x in enumerate(reversed(arr)) if all(x >= arr[i+1:])]