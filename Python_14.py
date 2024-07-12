```
from typing import List


def all_prefixes(string: str) -> List[str]:
    if not string:
        return []

    result = [""]
    for char in string:
        temp_result = []
        for prefix in result:
            temp_result.append(prefix)
            temp_result.append(prefix + char)
        result = temp_result
    return result


print(all_prefixes("abc"))