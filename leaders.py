def leaders(a):
    n = len(a)
    result = [a[n - 1]]

    for i in range(0, n - 1):
        if a[i] >= max(a[i + 1:]):
            result.insert(0, a[i])

    return result