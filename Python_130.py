def tri(n):
    if n == 0:
        return [0]
    elif n == 1:
        return [1]
    elif n == 2:
        return [1, 1]
    else:
        seq = [1, 1, 1]
        for i in range(3, n + 1):
            if i % 2 == 0:
                seq.append(1 + i // 2)
            else:
                seq.append(seq[i - 1] + seq[i - 2] + seq[i - 3])
        return seq