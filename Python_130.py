def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3]
    else:
        seq = [1, 3, 2]
        for i in range(3, n + 1):
            if i % 2 == 0:
                seq.append(int((i / 2) + 1))
            else:
                seq.append(seq[i - 1] + seq[i - 2] + (seq[i - 3] if i >= 4 else 3))
        return seq