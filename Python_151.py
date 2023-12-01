def double_the_difference(lst):
    return sum([n**2 for n in lst if n % 2 != 0 and n >= 0 and isinstance(n, int)])