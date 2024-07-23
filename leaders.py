def leaders(arr):
    max_seen = arr[-1]
    leaders_list = [max_seen]

    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_seen:
            max_seen = arr[i]
            leaders_list.append(max_seen)

    return leaders_list[::-1]