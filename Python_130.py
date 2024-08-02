def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3]
    else:
        seq = [1, 3]
        for _ in range(2, n + 1):
            if _ % 2 == 0:
                seq.append(_ // 2 + 1)
            else:
                seq.append(sum(seq[-2:]))
        return seq