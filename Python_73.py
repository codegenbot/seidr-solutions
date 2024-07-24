def smallest_change(arr):
    n = len(arr)
    left, right = 0, n-1
    changes = 0
    
    while left < right:
        if arr[left] != arr[right]:
            for i in range(left+1, right):
                if arr[i] == arr[right]:
                    arr[i], arr[left] = arr[left], arr[i]
                    changes += 1
                    break
            else:
                changes += right - left + 1
        left += 1
        right -= 1
    
    return changes

arr = list(map(str, input("Enter the array: ").split(",")))
print("The smallest change needed is:", smallest_change(arr))