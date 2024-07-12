def sort_third(l: list):
    return [elem for tpl in sorted(zip(l[::3], l[1::3], l[2::3]), key=lambda x: x[2]) for elem in tpl]