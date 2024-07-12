```
def tri(n):
    if n == 0:
        return [3]

    tri_seq = [3]

    for _ in range(1, n + 1):
        if len(tri_seq) % 2 == 0:
            tri_seq.append(1 + (len(tri_seq) // 2))
        else:
            a, b = tri_seq[-2], tri_seq[-1]
            c = a + b
            tri_seq.append(c)

    return tri_seq