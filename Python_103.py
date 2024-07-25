```
def rounded_avg(n, m):
    if n > m:
        return -1
    avg = (n + m) / 2.0
    round_avg = round(avg)
    if round_avg.is_integer():
        return f"0b{format(int(round_avg), 'b').zfill(8)}"
    else:
        return "0b1"