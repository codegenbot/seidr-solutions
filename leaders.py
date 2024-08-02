Here is the Python solution:

def leaders(arr):
    return [i for i in arr if all(i >= j for j in arr[arr.index(i)+1:])]