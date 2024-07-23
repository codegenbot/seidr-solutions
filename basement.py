def basement(arr):
    total = 0
    i = 0
    negative_sum_reached = True
    while True:
        total += arr[i]
        if total < 0 and negative_sum_reached:
            return i + 1
        elif total >= 0:
            negative_sum_reached = False
        i += 1