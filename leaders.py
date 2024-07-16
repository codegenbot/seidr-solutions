Here is the solution:

def leaders(arr):
    return [max(arr[i:]) for i in range(len(arr))][::-1]