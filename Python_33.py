def sort_third(l: list):
    sorted_values = sorted(l[::3])
    l_prime = [x if i % 3 != 0 else sorted_values.pop(0) for i, x in enumerate(l)]
    return l_prime