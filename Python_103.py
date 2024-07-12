```
def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) // 2
    return bin(round(avg)).lstrip('0').lstrip('-') or '0'