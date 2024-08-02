Here is the Python solution:

def leaders(arr):
    return [arr[i] for i in range(len(arr)-1,-1,-1) if all(x <= arr[i] for x in arr[i+1:]) or i == len(arr)-1]