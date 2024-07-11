```Python
def basement(arr):
    total = 0
    basement_index = 0
    for i in range(len(arr)):
        total += arr[i]
        if total < 0:
            return i+1
        else:
            basement_index = i + 1
    return -1