def digits(n):
    result = 1
    for d in str(n):
        if int(d) % 2 != 0:
            result *= int(d)
    return result