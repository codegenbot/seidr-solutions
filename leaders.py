Here is the Python solution for the problem:

def leaders(arr):
    leaders = [arr[i] for i in range(len(arr)-1, -1, -1) if all(x <= arr[i] for x in arr[i+1:])]
    return leaders