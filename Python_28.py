from typing import List

def concatenate(input_list: List[str]) -> str:
    if not isinstance(input_list, list):
        raise ValueError("Input must be a list")
    for string in input_list:
        if not isinstance(string, str):
            raise ValueError("All elements in the list must be strings")
    
    if len(input_list) == 0:
        return "Please provide some input"
    
    result = ''
    for string in input_list:
        result += string + ' '
    return result.strip()