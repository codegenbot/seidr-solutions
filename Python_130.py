def tri(n):
    if n == 0:
        return [0]
    if n == 1:
        return [3]
    res = [3, 0, 0]
    for i in range(3, n + 1):
        if i % 2 == 0:
            res.append(1 + i // 2)
        else:
            res.append(res[i - 1] + res[i - 2] + res[i - 3])
    return res