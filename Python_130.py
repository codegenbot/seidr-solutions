def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [3]
    elif n == 2:
        return [3, 2]
    else:
        trib = [3, 2]
        for _ in range(2, n):
            trib.append(sum(trib[-2:] + [int(1 + (_ / 2))]))
        return trib