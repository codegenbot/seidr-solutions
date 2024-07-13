def leaders(arr):
    return [
        x
        for i, x in reversed(list(enumerate(arr)))
        if all(x >= y for j, y in enumerate(arr) if j > i)
    ]