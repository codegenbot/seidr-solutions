def first_negative_index(arr):
    for i in range(len(arr)):
        if sum(arr[:i+1]) < 0 and sum(arr[i+1:]) < 0:
            return i
    return None