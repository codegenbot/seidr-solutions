```Python
def smallest_change(arr):
    n = len(arr)
    changes = 0
    
    i, j = 0, n - 1
    
    while i <= j:
        if arr[i] != arr[j]:
            for k in range(i + 1, j + 1):
                if arr[k] == arr[j]:
                    arr[i], arr[k] = arr[k], arr[i]
                    changes += 1
                    break
            else:
                changes += j - i + 1
        i += 1
        j -= 1
    
    return changes

input_list = [0, 1, 0, 1, 1, 0]
print(smallest_change(input_list))