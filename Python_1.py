from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    paren_list = paren_string.split(")(")
    return ["(" + group + ")" for group in paren_list]