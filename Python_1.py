from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    return [group for group in paren_string.split(")") if group.strip() != ""]