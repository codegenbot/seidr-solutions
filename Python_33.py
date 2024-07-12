def sort_third(l: list):
    return [elem for tpl in sorted(zip(l[::3], l[1::3], l[2::3])) for elem in tpl]