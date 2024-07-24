```
def leaders(a):
    result = [a[-1]]
    max_right = a[-1]

    for i in range(len(a) - 2, -1, -1):
        if a[i] >= max_right:
            result.insert(0, a[i])
            max_right = a[i]

    return result