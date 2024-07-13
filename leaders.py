```
def leaders(arr):
    arr = arr[::-1]
    result = [arr[i] for i in range(len(arr)) if all(x <= arr[i] for x in arr[:i])]
    return result