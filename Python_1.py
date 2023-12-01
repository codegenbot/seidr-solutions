from typing import List

def separate_paren_groups(paren_string: str) -> list[str]:
    return paren_string.replace(" ", "").split(")(")