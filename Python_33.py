def flatten_list(input_list):
    if isinstance(input_list, list):
        return [item for sublist in input_list for item in flatten_list(sublist)]
    else:
        return [input_list]