def sort_third(input_list):
    return sorted(input_list, key=lambda x: int(str(x)[2]) if isinstance(x, int) and len(str(x)) >= 3 else 127 if len(str(x)) < 3 else ord(str(x)[2])