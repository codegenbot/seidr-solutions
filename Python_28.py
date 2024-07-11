def concatenate_strings(input_list: List[str]) -> str:
    result = ""
    for string in input_list:
        if len(result) > 0:
            result += " "
        result += string
    return result