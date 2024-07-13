def leaders(arr):
    return [
        arr[i]
        for i in range(len(arr) - 1, -1, -1)
        if all(a <= arr[i] for a in arr[i + 1 :])
    ]