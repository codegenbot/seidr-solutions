def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [3]
    elif n == 2:
        return [3, 2]
    else:
        seq = [3, 2]
        for _ in range(2, n):
            seq.append(sum(seq[-1:]) % (10 ** 9 + 7))
        return seq