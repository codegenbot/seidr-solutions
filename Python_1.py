from typing import List


def separate_paren_groups(paren_strings: List[str]) -> List[str]:
    result = []
    for paren_string in paren_strings:
        result.extend(paren_string.replace(" ", "").split(")("))
    return result