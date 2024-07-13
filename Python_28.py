for string in input_list:
    if not isinstance(string, str):
        raise ValueError("All elements in the list must be strings")
    
if len(input_list) == 0:
    return "Please provide some input"
else:
    result = ''
    for string in input_list:
        result += string + ' '
    return result.strip()