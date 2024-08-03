Here is the Python solution for the problem:

def leaders(arr):
    return [x for x in reversed(arr) if all(x >= y for y in arr[arr.index(x)+1:])]