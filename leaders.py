def leaders(arr):
    leaders_list = [arr[i] for i in range(len(arr) - 1, -1, -1)]
    return leaders_list