def smallest_change(arr):
    n = len(arr)
    left, right = 0, n - 1
    changes = 0

    while left < right:
        if arr[left] != arr[right]:
            for i in range(left + 1, right + 1):
                if arr[i] == arr[right]:
                    arr[i], arr[left] = arr[left], arr[i]
                    changes += 1
                    break
            else:
                if arr[left] < arr[right]:  
                    arr.insert(left, arr[right])
                    changes += 1
                elif arr[left] > arr[right]:  
                    del arr[left]
                    changes += 1
        left += 1
        right -= 1

    return changes