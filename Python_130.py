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
            if i % 2 != 0:
                next_val = trib[i - 1] + trib[i - 2] + trib[i + 1]
            else:
                next_val = int((i / 2) + 1)
            trib.append(next_val)
    return trib