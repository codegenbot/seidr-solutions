def sort_third(l: list):
    if len(l[0]) != 3:
        return "Error: Input must be a list of lists with three elements"
    sorted_l = sorted((x[2], x) for x in l)
    return [x[1] for x in sorted_l]