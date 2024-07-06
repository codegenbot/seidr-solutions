def digits(n):
    if n < 0:
        return max(map(int, str(-n)))
    else:
        return max(map(int, str(n)))