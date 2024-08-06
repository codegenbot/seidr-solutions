def leaders(arr):
    return [
        x
        for i, x in enumerate(reversed(arr))
        if all(x >= y for j, y in enumerate(arr[i + 1 :]))
    ]