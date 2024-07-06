def digits(n):
    if n < 0:
        return int(max(map(int, str(-n))))
    else:
        return int(max(map(int, str(n))))