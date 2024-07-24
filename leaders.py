```
def leaders(a):
    n = len(a)
    result = [a[n - 1]]
    max_right = a[n - 1]

    for i in range(n - 2, -1, -1):
        if a[i] >= max_right:
            result.append(a[i])
            max_right = a[i]
    return result[::-1]