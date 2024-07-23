def smallest_change(arr):
    arr.sort()
    n = len(arr)
    rev_arr = str(arr)[::-1]
    
    changes = 0
    for i in range(n // 2):
        if str(arr[i]) != rev_arr[n - i - 1]:
            changes += 1
    
    return changes

input_array = list(map(int, input("Enter the array elements separated by space: ").split()))
print(smallest_change(input_array))