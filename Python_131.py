def digits(n):
    if n < 0 and len(str(-n)) > 1 and str(-n)[0] == '0':
        return len(str(-n)) - 2
    elif n == 0:
        return 0
    else:
        max_digit = max(map(int, str(abs(n))))
        return max_digit