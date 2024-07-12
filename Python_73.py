```
def smallest_change(arr):
    n = len(arr)
    left_to_right = [0] * n
    right_to_left = [0] * n
    
    for i in range(n):
        if i == 0:
            left_to_right[i] = arr[0]
        else:
            if arr[i] == left_to_right[i-1]:
                left_to_right[i] = arr[i]
            else:
                left_to_right[i] = left_to_right[i-1]
        
        if i == n - 1:
            right_to_left[i] = arr[n-1]
        else:
            if arr[i] == right_to_left[n-i-2]:
                right_to_left[i] = arr[i]
            else:
                right_to_left[i] = right_to_left[n-i-2]
    
    count = 0
    for i in range(n):
        if left_to_right[i] != right_to_left[n-i-1]:
            count += 1
    
    return count