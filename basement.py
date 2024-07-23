def basement(arr):
    total = 0
    i = 0
    negative_sum_reached = False
    while True:
        total += arr[i]
        if total < 0 and not negative_sum_reached:
            negative_sum_reached = True
            return i
        elif total > 0:
            negative_sum_reached = False
        i += 1