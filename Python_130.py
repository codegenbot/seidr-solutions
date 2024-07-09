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
            t.append(t[i - 1] + t[i - 2] + (t[i - 3] if i > 2 else 0))
        return t