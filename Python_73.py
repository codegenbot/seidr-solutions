def smallest_change(arr):
    n = len(arr)
    if n <= 1:
        return 0
    left, right = 0, n - 1
    changes = 0
    
    while left < right:
        if arr[left] > arr[right]:
            for i in range(left + 1, right + 1):
                if arr[i] == arr[right]:
                    arr[i], arr[left] = arr[left], arr[i]
                    changes += 1
                    break
            else:
                changes += right - left + 1
        elif arr[left] < arr[right]:
            for i in range(left + 1, right + 1):
                if arr[i] == arr[left]:
                    arr[i], arr[right] = arr[right], arr[i]
                    changes += 1
                    break
            else:
                changes += right - left + 1
        left += 1
        right -= 1
    
    return changes

input_list = [0, 1, 0, 1, 1, 0]
print(smallest_change(input_list))