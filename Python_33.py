def sort_third(input_list):
    return sorted(input_list, key=lambda x: int(str(x)[-3]) if len(str(x)) >= 3 else 10)