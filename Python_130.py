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
            trib.append(trib[i - 1] + trib[i - 2] + (i + 1) / 2)
        return trib