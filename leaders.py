```
def leaders(arr):
    leaders_list = []
    max_right = arr[-1]
    for x in reversed(arr):
        if x >= max_right:
            leaders_list.append(x)
            max_right = x
    return list(reversed(leaders_list))