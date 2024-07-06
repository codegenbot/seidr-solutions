def sort_third(input_list):
    return [sorted(input_list[k:k+3]) for k in range(0, len(input_list), 3)] + (
        [sorted(input_list[j:j+2])] if len(input_list) % 3 != 0 else []
    )