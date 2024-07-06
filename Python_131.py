def digits(n):
    if not isinstance(n, int):
        return 0
    return str(max(int(digit) for digit in str(n)))