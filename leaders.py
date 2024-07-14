def leaders(arr):
    if not arr:
        return []

    leaders_list = [arr[-1]]
    max_right = arr[-1]

    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_right:
            leaders_list.append(arr[i])
            max_right = arr[i]
    return list(reversed(leaders_list))