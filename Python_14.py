```Python
from typing import List

def all_prefixes(string: str) -> List[str]:
    result = [""]
    for char in string:
        temp_result = []
        for prefix in result:
            temp_result.append(prefix + char)
        result = temp_result
    return result