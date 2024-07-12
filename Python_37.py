def sort_even(l: list):
    sorted_l = sorted(l)
    return [sorted_l[i] if i % 2 != 0 else sorted_l[0] for i in range(len(l))]