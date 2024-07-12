def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [3]
    elif n == 2:
        return [3, 2]
    else:
        t = [3, 2]
        for i in range(2, n):
            t.append(sum(t[-1:][0], t[-2], (t[-1] + t[0]) / 2))
        return t