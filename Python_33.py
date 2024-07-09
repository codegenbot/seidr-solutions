def sort_third(l: list):
    sorted_list = sorted(l, key=lambda x: x[2] if len(x) >= 3 else x[0])
    return [elem for sublist in sorted_list for elem in sublist]