def leaders(a):
    n = len(a)
    result = [a[-1]]

    for i in range(n - 2, -1, -1):
        if a[i] >= a[-1]:
            result.append(a[i])
            a[-1] = a[i]

    return result[::-1]