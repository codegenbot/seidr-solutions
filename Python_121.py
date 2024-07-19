def sum_odd_digits(lst):
    return sum(int(d) for d in ''.join(map(str, lst)) if int(d) % 2 != 0)