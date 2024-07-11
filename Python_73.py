def smallest_change():
    arr = list(map(str, input("Enter numbers separated by space: ").split()))
    left, right = 0, len(arr)-1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            changes += 1
            mid = (left + right) // 2
            while mid > left and arr[mid] != arr[right]:
                mid -= 1
            if mid == left:
                left += 1
            else:
                right = mid
        else:
            left += 1
            right -= 1
    
    return changes

print(smallest_change())