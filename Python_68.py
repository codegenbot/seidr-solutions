def pluck(arr):
    # find the smallest even value in the array
    smallest_even = None
    for i in range(len(arr)):
        if arr[i] % 2 == 0 and (smallest_even is None or arr[i] < smallest_even):
            smallest_even = arr[i]
    # find the index of the smallest even value
    smallest_index = None
    for i in range(len(arr)):
        if arr[i] == smallest_even:
            smallest_index = i
            break
    # return the result
    return [smallest_even, smallest_index] if smallest_even is not None else []