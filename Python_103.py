def rounded_avg(n, m):
    if n > m:
        return -1
    n_bin = bin(int(bin(n)[2:]))[2:]
    m_bin = bin(int(bin(m)[2:]))[2:]
    total_bin = bin((int(n_bin, 2) + int(m_bin, 2)) // 2)[2:]
    return str(int(total_bin, 2))