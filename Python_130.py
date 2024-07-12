```
def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [3]
    elif n == 2:
        return [3, 2]
    else:
        seq = [3, 2]
        for i in range(2, n):
            if i % 2 == 0:
                seq.append(1 + i // 2)
            else:
                seq.append(seq[i-1] + seq[i-2] + seq[i-3])
        return seq