def leaders(a):
    n = len(a)
    leaders_list = [a[n - 1]]

    for i in range(n - 2, -1, -1):
        if a[i] >= a[i + 1]:
            leaders_list.append(a[i])

    return reversed(leaders_list)