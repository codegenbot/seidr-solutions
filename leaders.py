def leaders(a):
    n = len(a)
    leaders_out = [a[n - 1]]
    for i in range(n - 2, -1, -1):
        if a[i] >= a[i + 1]:
            leaders_out.append(a[i])
    return list(reversed(leaders_out))