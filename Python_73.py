```
def smallest_change():
    arr = input("Enter space-separated numbers: ").split()
    if not all(arr[i].isdigit() for i in range(len(arr))):
        return 
    n = len(arr)
    try:
        arr = list(map(int, arr))
        arr.sort()
    except Exception as e:
        return str(e)
    
    changes = 0
    for i in range(1, n):
        if arr[i] != arr[0]:
            break
    else:
        return n - 1
    
    for i in range(n):
        while arr[i] != arr[0]:
            arr[i], arr[0] = arr[0], arr[i]
            changes += 1
    
    return changes

print(smallest_change())