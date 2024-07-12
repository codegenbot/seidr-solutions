def check(r1, r2):
    r = double_the_difference([r1, r2])
    half_diff = (abs(r1 - r2)) / 2
    return abs((r1 + r2) - (2 * half_diff))