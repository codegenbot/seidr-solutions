def sort_third(input_list):
    return sorted(input_list, key=lambda x: (0, 0, x) if isinstance(x, int) else x)