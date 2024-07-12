def sort_third(l: list):
    return [elem for tpl in sorted(zip(*(l[i::3] for i in range(3))) for elem in tpl)]