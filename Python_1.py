from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = paren_string.split(")(")
    return ["(" + group + ")" for group in result]