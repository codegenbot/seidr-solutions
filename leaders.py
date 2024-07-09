def leaders(arr):
    leaders = [arr[-1]]
    for i in range(len(arr)-1, -1, -1):
        if arr[i] >= arr[i+1]:
            if i == len(arr) - 1: 
                leaders.append(arr[i])
            else:
                leaders.insert(0, arr[i])