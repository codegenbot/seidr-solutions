```
def remove_duplicates(input_string):
    if isinstance(input_string, list):
        input_string = ','.join(map(str, input_string))
    
    input_list = [int(x) for x in input_string.split(",")]
    return sorted(dict.fromkeys(map(str, input_list)).values(), key=lambda x: input_list.index(int(x)))