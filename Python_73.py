```
def array_change(arr):
    arr = list(map(int, ' '.join(map(str, arr)).split()))
    arr.sort()
    
    changes = 0
    if len(set(arr)) > 1: 
        return -1

    for i in range(1, len(arr)):
        while arr[i] != arr[0]:
            if min(arr) == max(arr):
                return -1
            arr[i], arr[0] = arr[0], arr[i]
            changes += 1

    return changes

input_array = [1, 2, 3]
smallest_change = array_change(input_array)
print(smallest_change)