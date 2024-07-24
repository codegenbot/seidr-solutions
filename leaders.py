def leaders(a):
    n = len(a)
    max_right = a[n - 1]
    result = [max_right]

    for i in range(n-2, -1, -1):
        if a[i] >= max_right:
            max_right = a[i]
            result.append(max_right)

    return result[::-1]