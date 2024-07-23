```
def smallest_change(arr):
    arr_len = len(arr)
    front = arr[:arr_len//2]
    back = arr[arr_len//2:][::-1]

    count = 0
    for i in range(len(front)):
        if front[i] != back[i]:
            count += 1

    return count