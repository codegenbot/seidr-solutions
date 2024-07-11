print("Hello World!")


def smallest_change(arr):
    n = len(arr)
    left, right = 0, n - 1
    changes = 0

    while left < right:
        if arr[left] != arr[right]:
            for i in range(left + 1, right):
                if arr[i] == arr[right]:
                    arr[i], arr[left] = arr[left], arr[i]
                    changes += 1
                    break
            else:
                arr[left], arr[right] = arr[right], arr[left]
                changes += 1
        left += 1
        right -= 1

    return n - len(
        str(arr).translate(
            {ord(c): None for c in str(arr) if ord(c) < 48 or ord(c) > 57}
        )
    )