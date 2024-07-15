def rounded_avg(n, m):
    if n > m:
        return -1
    n_bin = bin(n)[2:]
    m_bin = bin(m)[2:]
    total = int(n_bin, 2) + int(m_bin, 2)
    total = round(total / 2)
    return bin(total)[2:]