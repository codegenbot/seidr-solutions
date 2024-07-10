def basement(arr):
    total_sum = 0
    index = 0
    while True:
        total_sum += arr[index]
        if total_sum < 0:
            return index + 1
        index += 1