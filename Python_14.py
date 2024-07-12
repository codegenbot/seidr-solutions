from typing import List


def all_prefixes(string: str) -> List[str]:
    result = [""]
    for char in string:
        new_list = []
        for prefix in result:
            new_list.append(prefix + char)
        result += new_list
    return result