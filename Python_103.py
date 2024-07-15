```
def rounded_avg(n, m):
    if n > m:
        return -1
    n_bin = bin(n)[2:]
    m_bin = bin(m)[2:]
    avg = (n + m) // 2
    if n % 2 == 0: 
        total = avg + 1 
    else: 
        total = avg
    return bin(total)[2:]