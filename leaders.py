def leaders(arr):
    if not arr:
        return []

    max_right = arr[-1]
    leaders_list = [max_right]

    for i in range(len(arr)-2, -1, -1):
        if arr[i] >= max_right:
            leaders_list.append(arr[i])
            max_right = arr[i]

    return list(reversed(leaders_list))