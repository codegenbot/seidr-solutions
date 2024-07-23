def basement(arr):
    total = 0
    i = 0
    while True:
        total = 0  
        for j in range(i, len(arr)):
            total += arr[j]
            if total < 0:
                return j + 1
        i += 1