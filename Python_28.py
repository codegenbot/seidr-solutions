from typing import List

def concatenate_strings(input_list: List[str]) -> str:
    total_string = ""
    for string in input_list:
        total_string += string
    return total_string