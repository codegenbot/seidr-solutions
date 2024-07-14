def leaders(arr):
    if not arr:
        return []

    leaders_list = [arr[-1]]

    for i in range(len(arr)-2, -1, -1):
        leaders_list.append(arr[i])
        max_right = max(arr[i+1:])

    return list(reversed(leaders_list))