def sort_third(l: list):
    third_element_list = [x[2] for x in l]
    return sorted([x for x in l if x[2] == third_element_list.sort()[0]])