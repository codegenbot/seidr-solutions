def digits(n):
    if n < 0:
        return '0'
    else:
        return str(max(map(int, str(abs(n))), key=lambda x: x[0]))