def sort_third(input_list):
    return sorted(input_list, key=lambda x: int(str(x)[2]) if len(str(x)) > 2 else 10)