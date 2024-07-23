def basement(arr):
    total = sum(arr[:])
    for i in range(len(arr)):
        if total < 0:
            return i
        total += arr[i] - arr[i-1] if i else arr[i]