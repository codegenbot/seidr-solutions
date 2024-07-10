def sort_third(input_list):
    return sorted(input_list, key=lambda x: x % 10 if isinstance(x, int) and x >= 100 else int(str(x)[-1]) if isinstance(x, int) else int(str(x)[-1]))