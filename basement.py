def basement(arr):
    for i in range(len(arr)):
        running_sum = sum(arr[: i + 1])
        if running_sum < 0:
            return i + 1