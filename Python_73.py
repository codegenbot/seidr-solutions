def smallest_change(arr):
    if isinstance(arr[0], list):
        arr = [int(x) for sublist in arr for x in sublist]
    else:
        arr = [int(x) for x in arr]

    return bin(len(arr) - len(set(arr))).count("1")