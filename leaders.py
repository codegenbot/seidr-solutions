Here is the solution in Python:

def leaders(arr):
    return [x for i, x in enumerate(reversed(arr)) if all(x >= arr[j] for j in range(i+1, len(arr)))]