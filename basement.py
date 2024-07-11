def basement(arr):
    total = 0
    seen_negative_sum = False
    for i in range(len(arr)):
        total += arr[i]
        if total < 0:
            seen_negative_sum = True
    return -1 if not seen_negative_sum else i + 1