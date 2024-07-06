def smallest_change(arr):
    n = len(arr)
    arr = [str(x) for x in arr]
    original_str = ''.join(arr)
    reverse_str = original_str[::-1]
    
    count = 0
    for i in range(n):
        if arr[i] != reverse_str[i]:
            count += 1

    return count