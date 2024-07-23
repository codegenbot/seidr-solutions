```python
def rounded_avg(n, m):
    if n >= m:
        avg = (n + m) / 2.0
        return format(int(avg), 'b')
    else:
        return -1