```
def leaders(arr):
    n = len(arr)
    leaders = [arr[n - 1]]
    max_right = arr[n - 1]
    
    for i in range(n - 2, -1, -1):
        if arr[i] >= max_right:
            leaders.insert(0, arr[i])
            max_right = arr[i]

    max_left = arr[0]
    leader_found = False
    for num in arr:
        if num <= max_left and not leader_found:
            break
        leader_found = True
        leaders.insert(0, num)
        max_left = num

    return leaders