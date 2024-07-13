Here is the Python solution for the problem:

def leaders(arr):
    return [arr[i] for i in range(len(arr)-1, -1, -1) if all(arr[i] >= arr[j] for j in range(i+1, len(arr)))]