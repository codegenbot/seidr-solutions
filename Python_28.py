from typing import List


def concatenate(strings: List[str]) -> str:
    try:
        result = ""
        for string in strings:
            if not isinstance(string, str):
                return "Invalid input. All inputs should be strings."
            result += string
        return result
    except ValueError as e:
        return str(e)