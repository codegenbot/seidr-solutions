```
def basement(arr):
    total = 0
    seen_negative = False
    for i in range(len(arr)):
        if not seen_negative and total < 0:
            return i
        total += arr[i]
        seen_negative = total < 0
    return -1