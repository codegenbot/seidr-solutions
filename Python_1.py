from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    return list(filter(None, paren_string.split(")")))