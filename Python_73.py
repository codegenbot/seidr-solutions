```
def smallest_change(arr):
    arr = list(map(int, input().split()))
    n = len(arr)
    rev_arr = arr[::-1]
    
    changes = 0
    for i in range(n // 2):
        if arr[i] != rev_arr[n - i - 1]:
            changes += 1
    
    return changes

print(smallest_change([]))