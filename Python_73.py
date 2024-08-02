```
def smallest_change():
    arr = input("Enter the array elements separated by space: ").split()
    n = len(arr)
    left = right = 0
    changes = 0
    
    while left < n // 2:
        if arr[left] != arr[n - 1 - left]:
            changes += 1
            while left < n // 2 and arr[left] != arr[n - 1 - left]:
                left += 1
        else:
            left += 1
    
    return changes

print(smallest_change())