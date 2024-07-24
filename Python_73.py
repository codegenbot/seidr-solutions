def smallest_change(arr):
    arr.sort()
    initial = arr[0]
    change_count = 0

    for num in arr:
        if num != initial:
            change_count += 1
            initial = num

    return change_count