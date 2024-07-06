def rounded_avg(n, m):
    if n > m:
        return "-1"
    total = sum(range(n, m + 1))
    avg = total / (m - n + 1)
    return (
        "0b"
        + ("01" * ((8 - len(bin(int(round(avg)))) % 8) % 8))
        + bin(int(round(avg)))[-1:-9:-1]
    )