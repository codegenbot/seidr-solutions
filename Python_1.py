from typing import List
import re

def separate_paren_groups(paren_string: str) -> List[str]:
    groups = re.split('(?<=\\))|(?<=\\(')', paren_string)
    return [g for g in groups if g]