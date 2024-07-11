def concatenate_strings(input_list: List[str]) -> str:
    output_string = ""
    for string in input_list:
        if string:
            output_string += string + " "
    return output_string.strip()