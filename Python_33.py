def sort_third(l: list):
    third_elements = [i for i in l if i % 3 == 0]
    not_third_elements = sorted([i for i in l if i % 3 != 0])
    return not_third_elements + third_elements