```
def leaders(arr):
    return [max(arr[:i+1]) for i in range(len(arr)-1)] + [arr[-1]]