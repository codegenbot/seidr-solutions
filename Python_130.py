def tri(n):
    res = [3]
    i = 1
    while i <= n:
        if i % 2 == 0:
            res.append(1 + i // 2)
        else:
            res.append(res[i - 1] + res[i - 2] + res[i - 3])
        i += 1
    return res