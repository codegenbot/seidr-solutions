def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [3, 1]
    else:
        trib = [3, 1]
        for _ in range(2, n + 1):
            trib.append(
                sum(trib[-1], trib[-2], int(trib[-3]) / 2)
                if _ % 2 == 0
                else sum(trib[-2], trib[-3])
            )
        return trib