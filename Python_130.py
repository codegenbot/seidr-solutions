def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3]
    else:
        t = [1, 3]
        for i in range(2, n + 1):
            if i % 2 == 0:
                t.append(1 + i // 2)
            else:
                t.append(t[i - 1] + t[i - 2] + (t[i - 3] if i > 2 else 3))
        return t