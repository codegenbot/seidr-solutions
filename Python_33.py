def sort_third(input_list):
    return sorted(input_list, key=lambda x: x if not isinstance(x, int) or x < 100 else x % 10)