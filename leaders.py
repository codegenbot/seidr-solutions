Here is the Python solution for the "leaders" problem:

def leaders(arr):
    leader = [x for x in arr[::-1] if all(x >= y for y in arr[arr.index(x)+1:])]
    return leader[::-1]