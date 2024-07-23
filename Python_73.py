```
def smallest_change(arr):
    n = len(arr)
    rev_arr = arr[::-1]
    
    changes = 0
    for i in range(n // 2):
        if arr[i] != rev_arr[n - i - 1]:
            changes += 1
    
    return changes

input_array = list(map(int, input("Enter numbers separated by space: ").split()))
print(smallest_change(input_array))