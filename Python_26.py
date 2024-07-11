def remove_duplicates(input_string):
    if isinstance(input_string, list):
        input_string = ','.join(map(str, input_string))
    
    input_list = [int(x) for x in input_string.split(",")]
    return list(set(input_list))