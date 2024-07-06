def sort_third(input_list):
    result = [tuple(sorted(map(int, input_list[i:i+3]))) for i in range(0, len(input_list), 3)]
    return tuple(result)