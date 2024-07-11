```
from typing import Union

def longest(strings: list[str]) -> Union[str, None]:
    if not strings:
        return None
    max_len = 0
    result = strings[0]
    for s in strings:
        if len(s) > max_len:
            max_len = len(s)
            result = s
    return result