def smallest_change(arr):
    n = len(arr)
    count = 0
    pos = [i for i in range(n)]
    
    for k in range(n):
        while pos[k] != arr[k]:
            arr[pos[arr[k]]], arr[pos[k]] = arr[pos[k]], arr[pos[arr[k]]]
            pos[arr[k]], pos[k] = pos[k], pos[arr[k]]
            count += 1
    return count