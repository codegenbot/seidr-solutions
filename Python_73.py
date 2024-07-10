def smallest_change():
    arr = list(map(int, input().split()))
    n = len(arr)

    while len(arr) != n:
        arr = list(map(int, input().split()))

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