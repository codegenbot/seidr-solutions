def sort_third(l: list):
    return [elem for sub_list in [sorted(l[i:i+3]) for i in range(0, len(l), 3)] for elem in sub_list]