def basement(arr):
    index = 0
    for i in range(len(arr)):
        sum_total = 0
        for j in range(i+1):
            sum_total += arr[j]
        if sum_total < 0:
            return i + 1
    return -1