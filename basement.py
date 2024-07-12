```
def basement(arr):
    total = 0
    for i in range(len(arr)):
        total += arr[i]
        if total < 0:
            continue
        if total == 0:
            total = 1
        if total > 0:
            total = 0
    return total < 0 and len(arr) - sum(1 for x in range(total + 1) if x not in arr) or -1