def remove_duplicates(input_string):
    if isinstance(input_string, list):
        return ','.join(map(str, set(input_string)))
    return ','.join(map(str, set(int(x) for x in input_string.split(","))))