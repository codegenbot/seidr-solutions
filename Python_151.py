def check(d):
    result = double_the_difference(d)
    half_diff = (abs(1 - d[0]) + abs(1 - d[-1])) / 2
    return 2 * half_diff if result == min(d) else result