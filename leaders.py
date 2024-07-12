def leaders(a):
    n = len(a)
    leaders = [a[n - 1]]

    for i in range(n - 2, -1, -1):
        if a[i] >= a[i + 1]:
            leaders.append(a[i])

    return leaders[::-1]