def smallest_change(arr):
    return sum(1 for i in range(len(arr)//2) if arr[i] != arr[-i-1])