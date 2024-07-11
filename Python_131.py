def digits(n):
    n = str(abs(n))
    last_non_9_digit = None
    for i in range(len(n) - 1, -1, -1):
        if n[i] != "9":
            last_non_9_digit = n[i]
    return int(last_non_9_digit) or 1