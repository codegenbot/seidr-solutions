from typing import List


def all_prefixes(string: str) -> List[str]:
    result = [""]
    for char in string:
        temp_result = [""] + [prefix + char for prefix in result]
        result = temp_result
    return sorted(result)