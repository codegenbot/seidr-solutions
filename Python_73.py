def smallest_change(arr):
    n = len(arr)
    arr.sort()

    if n % 2 == 0:
        return n // 2 * 2
    else:
        return n