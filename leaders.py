def leaders(a):
    result = [a[-1]]
    for i in range(len(a) - 2, -1, -1):
        if a[i] >= a[-1]:
            result.append(a[i])
            a[-1] = a[i]
    return list(reversed(result))