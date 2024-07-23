```
def leaders(arr):
    return [x for x in arr[::-1] if all(i <= x for i in arr[arr.index(x)+1:])][::-1]