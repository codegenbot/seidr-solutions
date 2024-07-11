def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3]
    elif n == 2:
        return [1, 3, 2]
    else:
        t = [1, 3, 2]
        for i in range(3, n + 1):
            t.append(t[i - 1] + t[i - 2] + t[i - 3])
        return t