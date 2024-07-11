def tri(n=0):
    if n == 0:
        return [1, 3]
    elif n == 1:
        return [1, 3]
    elif n == 2:
        return [1, 3, 2]
    else:
        seq = [1, 3, 2]
        for _ in range(2, n):
            seq.append(sum(seq[-1:]) % (10 ** 9 + 7))
        return seq