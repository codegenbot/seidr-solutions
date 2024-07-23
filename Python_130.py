def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3]
    else:
        seq = [1, 3]
        while len(seq) <= n:
            if len(seq) % 2 == 0:
                seq.append(1 + len(seq) // 2)
            else:
                seq.extend([seq[-1], seq[-2]])
        return seq