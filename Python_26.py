def remove_duplicates(input_string):
    input_list = [int(x) for x in input_string.split(",")]
    return list(set(input_list))