
def digits(n):
    if n < 0:
        return str(-n)[1:]
    else:
        max_digit = max(map(int, str(abs(n))))
        return str(max_digit)