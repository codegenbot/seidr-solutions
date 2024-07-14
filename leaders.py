def leaders(a):
    leaders_list = []
    max_right = a[-1]
    leaders_list.append(max_right)
    for i in range(len(a) - 2, -1, -1):
        if a[i] >= max_right:
            max_right = a[i]
            leaders_list.append(max_right)
    return reversed(leaders_list)