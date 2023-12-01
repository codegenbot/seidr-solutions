import re
from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    return re.split('([()]+)', paren_string)