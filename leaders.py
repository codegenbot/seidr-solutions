def leaders(arr):
    max_right = arr[-1]
    leaders_list = [max_right]
    for x in arr[:-1][::-1]:
        if x >= max_right:
            leaders_list.append(x)
            max_right = x
    return list(reversed(leaders_list))