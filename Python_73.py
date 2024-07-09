def smallest_change(arr):
    return sum(i != j for i, j in zip(arr, arr[::-1]))