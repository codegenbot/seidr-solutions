def leaders(arr):
    return [
        x
        for i, x in reversed(list(enumerate(arr)))
        if all(x >= arr[j] for j in range(i + 1, len(arr)))
    ]