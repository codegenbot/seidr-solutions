from typing import List

def concatenate(input_list: str) -> str:
    if not isinstance(input_list, str):
        raise ValueError("Input must be a string")
    
    if len(input_list.strip()) == 0:
        return "Please provide some input"
    
    result = ''
    for string in input_list.split():
        result += string + ' '
    return result.strip()