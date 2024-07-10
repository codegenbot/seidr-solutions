def smallest_change():
    arr = list(map(int, input("Enter number of coins and their denominations separated by space: ").split()))
    changes = 0
    for i in range(len(arr) - 1):
        if arr[i] > arr[i + 1]:
            arr[i], arr[i + 1] = arr[i + 1], arr[i]
            changes += 1
    return changes

print(smallest_change())