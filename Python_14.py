from typing import List


def all_prefixes(string: str) -> List[str]:
    if not string:
        return [""]

    result = ["", string[0]]
    for char in string[1:]:
        temp_result = result.copy()
        temp_result.append(char)
        for prefix in result[:]:
            temp_result.append(prefix + char)
        result = temp_result
    return result


print("['', 'a', 'ab', 'abc', 'b', 'bc', 'abc', 'c', 'bc', 'ac', 'abc']")