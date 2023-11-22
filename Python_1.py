import re
from typing import List


def separate_paren_groups(paren_string: str) -> List[str]:
    return re.split("\)\(", paren_string.replace(" ", ""))


input_string = input()
result = separate_paren_groups(input_string)
print(result)