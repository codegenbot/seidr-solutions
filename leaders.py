def leaders(a):
    n = len(a)
    result = []
    max_right = a[n - 1]

    for i in range(n - 1, -1, -1):
        if a[i] >= max_right:
            result.insert(0, a[i])
            max_right = a[i]

    return result