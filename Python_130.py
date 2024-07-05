def tri(n):
    if n < 0:
        return []
    seq = [1] * (n + 1)
    for i in range(n + 1):
        if i == 1:
            seq[i] = 3
        elif i > 1:
            if i % 2 == 0:
                seq[i] = 1 + i / 2
            else:
                seq[i] = (
                    seq[i - 1] + seq[i - 2] + seq[i + 1]
                    if i + 1 <= n
                    else seq[i - 1] + seq[i - 2]
                )
    return seq