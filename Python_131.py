def digits(n):
    has_odd = False
    while n:
        digit = n % 10
        if digit % 2:
            has_odd = True
            break
        n //= 10
    return 1 if has_odd else 0