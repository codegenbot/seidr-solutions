def sort_third(l: list):
    return [elem for sublist in sorted(zip(l[0::3], l[1::3], l[2::3])) for elem in sublist]