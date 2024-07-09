```python
def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2
    avg_int = round(avg)
    return bin(int(str(avg_int)))[2:]