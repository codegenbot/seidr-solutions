def remove_duplicates(input_list):
    return ",".join(map(str, set(map(int, input_list))))