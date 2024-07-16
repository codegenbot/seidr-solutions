def sort_zeros_first(input_list):
    input_list.sort(key=lambda x: x != 0)
    return input_list