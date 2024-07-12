def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [3]
    elif n == 2:
        return [3, 2]
    else:
        trib = [3, 2]
        for i in range(2, n):
            if i % 2 == 0:
                trib.append(1 + i // 2)
            else:
                a, b = trib[-2], trib[-1]
                trib.append(a + b + (trib[0] if i > 2 else 3))
        return trib