def check(r1, r2):
    result = double_the_difference([r1, r2])
    return abs(result - (r1 + r2) / 2) * 2