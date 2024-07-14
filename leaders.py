def leaders(arr):
    leaders_list = [arr[-1]]
    for i in range(len(arr) - 2, -1, -1):
        leaders_list.insert(0, max(arr[i], leaders_list[0]))
    return leaders_list