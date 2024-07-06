```
def smallest_change(arr):
    n = len(arr)
    front, back = 0, n - 1
    changes = 0
    
    while front < back:
        if arr[front] != arr[back]:
            arr[back], arr[front] = arr[front], arr[back]
            back -= 1
            front += 1
            for i in range(front+1, back):
                arr[i-1], arr[i] = arr[i], arr[i-1]
            changes += 1
        else:
            front += 1
            back -= 1
    
    return changes