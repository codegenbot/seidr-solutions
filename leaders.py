def leaders(arr):
    return [i for i in arr[::-1] if all(j <= i for j in arr[arr.index(i) + 1 :])]