from typing import List

def concatenate(input_list: List[str]) -> str:
    try:
        result = ''
        for string in input_list:
            result += string + ' '
        return result.strip()
    except TypeError as e:
        return "Program did not receive expected input. Please enter a list of strings."