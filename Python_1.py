from typing import List
import re


def separate_paren_groups(paren_string: str) -> List[str]:
    groups = re.findall(r"\(([^()]+)\)", paren_string)
    return ["(" + group + ")" for group in groups]