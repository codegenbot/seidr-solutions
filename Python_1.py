from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    result = [
        group
        for group in paren_string.replace("(", " ").replace(")", " ").split()
        if group.isalnum()
    ]
    return result