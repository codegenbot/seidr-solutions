def leaders(a):
    n = len(a)
    result = [a[n - 1]]

    for i in range(n - 2, -1, -1):
        if a[i] >= a[i + 1]:
            result.append(a[i])

    return reversed(result)