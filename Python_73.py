def smallest_change():
    while True:
        try:
            arr = list(map(int, input().split()))
            n = len(arr)
            break
        except ValueError:
            print("Invalid input! Please enter numbers separated by space.")

    while len(arr) != n:
        try:
            arr = list(map(int, input().split()))
        except ValueError:
            print("Invalid input! Please enter numbers separated by space.")
            return None

    arr.sort()
    left, right = 0, n - 1
    changes = 0

    while left < right:
        if arr[left] > arr[right]:
            arr[left], arr[right] = arr[right], arr[left]
            changes += 1
        left += 1
        right -= 1

    return changes


print(smallest_change())