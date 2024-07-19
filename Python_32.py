def find_zero(xs: list):
    largest_coeff = max(xs, key=abs)
    possible_zeros = [i for i, coeff in enumerate(xs) if coeff == largest_coeff]
    if len(possible_zeros) == 1:
        zero_index = possible_zeros[0]
    else:
        return None
    guess = -1
    while True:
        if round(poly(xs, guess), 5) == 0:
            return guess
        guess += 1