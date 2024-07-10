def sort_third(input_list):
    return sorted(input_list, key=lambda x: int(str(x)[2]) if isinstance(x, int) and x >= 100 else x)