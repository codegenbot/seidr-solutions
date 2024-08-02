```
def smallest_change(arr):
    n = len(arr)
    left, right = 0, n-1
    count = 0
    
    while left < right:
        if arr[left] != arr[right]:
            max_left = max(arr[:left+1])
            min_right = min(arr[right:])
            for i in range(left+1, right):
                if arr[i] == max_left or arr[i] == min_right:
                    count += 1
                    left, right = i, i
                    break
        else:
            left, right = left+1, right-1
    return count