from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    return [s.replace(" ", "") for s in paren_string.split(")(")]