def sort_third(l: list):
    sorted_list = []
    for i in range(0, len(l), 3):
        sorted_list.extend(sorted(l[i:i+3]))
    return sorted_list