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
                trib.append(int((i + 1) / 2))
            else:
                trib.append(sum(trib[i - 1 : i + 1]))
        return trib