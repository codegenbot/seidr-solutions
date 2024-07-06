def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3]
    else:
        trib = [1, 3]
        for i in range(2, n + 1):
            if i % 2 == 0:
                trib.append(i // 2 + 1)
            else:
                trib.append(sum(trib[-2:] + [trib[-1]]))
        return trib