```
from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for s in strings:
        if not isinstance(s, str):
            try:
                s = str(s)
            except Exception as e:
                return "Error: unable to convert to string - {}".format(e)
        result += s
    return result