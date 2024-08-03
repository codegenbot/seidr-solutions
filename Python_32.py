def find_zero(xs):
    sum_even = 0
    sum_odd = 1
    for x in xs:
        if abs(x) % 2 == 0:
            sum_even += x
        else:
            sum_odd *= x
    return -sum_even / sum_odd