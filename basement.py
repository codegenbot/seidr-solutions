```
def basement(arr):
    total = 0
    i = 0
    negative_sum_reached = True
    while i < len(arr):
        total += arr[i]
        if total > 0:
            total = 0
            negative_sum_reached = False
        elif not negative_sum_reached and total < 0:
            return i + 1
        i += 1