def tri(n):
    if n == 0:
        return [0]
    if n == 1:
        return [3]

    seq = [3]
    i, j, k = 0, 0, 3
    for _ in range(1, n):
        if _ % 2 == 0:
            k = 1 + i // 2
        else:
            i, j, k = j, k, i + j + k
        seq.append(k)

    return seq