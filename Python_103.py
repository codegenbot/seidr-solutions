```
def rounded_avg(n, m):
    avg = (n + m) / 2.0
    diff = abs(n - m)
    return f"0b{bin((math.ceil(avg+diff/2)-diff//2))[2:].ljust(8, '0')}"