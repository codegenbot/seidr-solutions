def smallest_change(arr):
    if len(arr) != 16:
        raise ValueError("Array length should be 16 bits")

    n = len(arr)
    forward = arr[:]
    backward = arr[::-1]
    
    for i in range(n//2):
        if forward[i] != backward[n-i-1]:
            return 1
    return 0