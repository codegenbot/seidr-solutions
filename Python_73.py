```
def smallest_change(arr1, arr2):
    return sum(1 for i in range(len(arr1)) if arr1[i] != arr2[i])