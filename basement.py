def basement(arr):
    total = 0
    index = -1
    seen_negative = False
    for i in range(len(arr)):
        if not seen_negative and total < 0:
            index = i
            seen_negative = True
        total += arr[i]
    return index if index != -1 else -1