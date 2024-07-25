def tri(n):
    res = [3]
    for i in range(1, n + 1):
        if i % 2 == 0:
            res.append(1 + i // 2)
        else:
            res.append(res[i - 1] + res[i - 2] + res[i + 1])
    return res