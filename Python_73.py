def smallest_change(arr):
    n = len(arr)
    arr_pos = [*enumerate(arr)]

    left_to_right = [0] * n
    right_to_left = [0] * n

    arr.sort()
    arr_dict = {k: v for v, k in arr_pos}

    inv_count = 0
    prev = arr[0]
    for i in range(n):
        if arr[i] != prev:
            inv_count += 1
        prev = arr[i]

    for i in range(n):
        if arr[i] != arr_pos[i][1]:
            left_to_right[i], right_to_left[n - i - 1] = (
                right_to_left[n - i - 1],
                left_to_right[i],
            )

    return min(left_to_right + right_to_left)