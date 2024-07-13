def leaders(arr):
    return [arr[-1]] + [
        x for i, x in enumerate(reversed(arr)) if all(x >= arr[j] for j in range(i + 1))
    ]