def smallest_change(arr):
    arr = [str(i) for i in arr]  
    return len(''.join(arr)) - len(str(arr)[::-1])