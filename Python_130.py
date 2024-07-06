```
def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [3]
    elif n == 2:
        return [3, 2]
    else:
        t = [3]
        for _ in range(2, n + 1):
            if _ % 2 == 0:
                t.append(int((t[-1] + t[-2]) / 2))
            else:
                t.append(t[-1] + t[-2] + t[-3])
        return t