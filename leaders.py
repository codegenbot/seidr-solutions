def leaders(arr):
    n = len(arr)
    return [arr[i] for i in range(n-1, -1, -1) if all(x <= arr[i] for x in arr[i+1:]) or i == n-1]