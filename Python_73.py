```
def array_change(arr):
    arr = list(map(int, ' '.join(map(str, arr)).split()))
    arr.sort()
    
    changes = 0
    for i in range(len(arr)):
        while arr[i] != arr[0]:
            arr[i], arr[0] = arr[0], arr[i]
            changes += 1
    
    return changes

input_array = [1, 2, 3]
smallest_change = array_change(input_array)
print(smallest_change)