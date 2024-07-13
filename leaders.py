def leaders(arr):
    return [max(arr)] + [
        x for i, x in enumerate(reversed(arr)) if all(x >= arr[j] for j in range(i))
    ]