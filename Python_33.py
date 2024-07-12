def sort_third(l: list):
    return [item for item in sorted(zip(*(l[i::3] for i in range(3)))][0] for item in item]