```
def leaders(arr):
    return [arr[i] for i in range(len(arr)) if all(x <= arr[i] for x in arr[:i+1])]