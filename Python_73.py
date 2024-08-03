```
def smallest_change(arr):
    arr.sort()
    return min((b-a for a, b in zip([0]+arr, arr+[len(arr)])), default=0)