def leaders(arr):
    leaders_list = [arr[-1]]
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= arr[-1]:
            leaders_list.append(arr[i])
            arr.pop()
    return leaders_list[::-1]