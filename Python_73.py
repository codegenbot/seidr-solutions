```
def smallest_change():
    arr = list(map(int, input().split()))
    changes = 0
    for i in range(len(arr) - 1):
        while arr[i] > arr[i + 1]:
            arr[i], arr[i + 1] = arr[i + 1], arr[i]
            changes += 1
    return changes


print(smallest_change())