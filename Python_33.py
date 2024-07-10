def sort_third(input_list):
    return sorted(input_list, key=lambda x: (x % 10, -x) if isinstance(x, int) and x >= 100 else x)