```
def smallest_change(arr):
    n = len(arr)
    left = right = rev_arr = arr.copy()
    for i in range(n // 2):
        while True:
            if rev_arr[i] == arr[n - i - 1]:
                break
            else:
                rev_arr[i], rev_arr[n - i - 1] = rev_arr[n - i - 1], rev_arr[i]
        left, right = right, left
    return n // 2 - len([i for i in range(n // 2) if arr[i] != rev_arr[n - i - 1]])