def smallest_change():
    arr = list(map(int, input().split()))
    changes = 0
    for i in range(len(arr) - 1):
        if arr[i] > arr[i + 1]:
            while i > 0 and arr[i] < arr[i - 1]:
                arr[i], arr[i - 1] = arr[i - 1], arr[i]
                i -= 1
                changes += 1
    return changes


print(smallest_change())