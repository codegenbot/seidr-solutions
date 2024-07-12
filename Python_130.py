def tri(n):
    if n == 0:
        return [0]
    elif n == 1:
        return [3]
    else:
        res = [0, 3]
        for i in range(2, n + 1):
            if i % 2 == 0:
                res.append(1 + i // 2)
            else:
                res.append(res[i - 1] + res[i - 2] + res[i - 3])
        return res