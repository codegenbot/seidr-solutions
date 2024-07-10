def smallest_change():
    sep = input("Enter a number and a separator (e.g., 1 2, for comma), then press Enter: ")
    arr = list(map(int, input(f"Enter {len(sep) - 1} numbers separated by '{sep}':").split(sep)))
    changes = 0
    for i in range(len(arr) - 1):
        if arr[i] > arr[i + 1]:
            arr[i], arr[i + 1] = arr[i + 1], arr[i]
            changes += 1
    return changes


print(smallest_change())