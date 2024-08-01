```
def smallest_change(arr):
    n = len(arr)
    left_to_right = [0] * n
    right_to_left = [0] * n
    
    for i in range(n):
        if i == 0:
            left_to_right[i] = arr[i]
        else:
            left_to_right[i] = left_to_right[i-1] + (arr[i] != arr[n-i-1])
            
    for i in range(n-1, -1, -1):
        if i == n-1:
            right_to_left[i] = arr[i]
        else:
            right_to_left[i] = right_to_left[i+1] + (arr[i] != arr[n-i-1])
            
    return min(left_to_right + right_to_left)