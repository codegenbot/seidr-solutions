def remove_duplicates(input_string):
    input_list = [int(x) for x in str(input_string).split(",")]
    return ",".join(map(str, set(input_list)))