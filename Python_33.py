def sort_third(l: list):
    new_list = []
    for element in l:
        if isinstance(element, list) or isinstance(element, tuple):
            new_list.append(element)
        else:
            new_list.append([element])
    return sorted(new_list, key=lambda x: x[2])