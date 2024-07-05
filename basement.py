def basement(arr):
    if all(x < 0 for x in arr): 
        return 0
    for i in range(len(arr)):
        if sum(arr[:i+1]) < 0:
            return i
    return -1