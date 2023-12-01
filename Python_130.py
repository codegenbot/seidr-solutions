```python
def tri(n):
    seq = [3]
    if n > 0:
        seq.append(1 + int(n / 2))
    for i in range(2, n + 1):
        if i % 2 == 0:
            seq.append(seq[i - 1] + seq[i - 2] + seq[i - 3])
        else:
            seq.append(seq[i - 1] + seq[i - 2] + seq[i])
    return seq[:n+1]