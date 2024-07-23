def leaders(arr):
    n = len(arr)
    leaders_list = []
    
    for i in range(n):
        is_leader = True
        for j in range(i + 1, n):
            if arr[i] < arr[j]:
                is_leader = False
                break
        if is_leader:
            leaders_list.append(arr[i])
    
    return leaders_list