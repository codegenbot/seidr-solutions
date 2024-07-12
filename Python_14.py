from typing import List


def all_prefixes(string: str) -> List[str]:
    if not string:
        return []

    result = [""]
    for char in string:
        temp_result = [p + char for p in result]
        result.extend(temp_result)
    return result


print(all_prefixes("abc"))