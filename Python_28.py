from typing import List

def concatenate_strings(input_list: List[str]) -> str:
    result = ""
    for string in input_list:
        if string.startswith("http"):
            result += string + " "
        else:
            result += "<" + string + "> "
    return result.strip()