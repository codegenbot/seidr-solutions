from typing import List

def concatenate(input_list: List[str]) -> str:
    result = ''
    for string in input_list:
        result += string + ' '
    return result.strip()