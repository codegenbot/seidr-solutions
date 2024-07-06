def digits(n):
    if n < 0:
        raise ValueError("Invalid input: must be a positive integer")
    else:
        return max([int(digit) for digit in str(n)])