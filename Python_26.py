def remove_duplicates(input_string):
    if isinstance(input_string, list):
        input_string = ','.join(map(str, input_string))
    
    input_list = [int(x) for x in input_string.split(",")]
    return [x for x in set(input_list)]