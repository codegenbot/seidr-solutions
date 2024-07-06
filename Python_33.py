def sort_third(l: list):
    zero_modulus = [x for x in l if x % 3 == 0]
    return [i if i % 3 != 0 else sorted(zero_modulus)[-1] for i in l]