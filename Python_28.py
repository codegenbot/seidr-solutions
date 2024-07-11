from typing import List

def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        if not string.startswith("http://") and not string.startswith("https://"):
            string = "http://" + string
        result += string
    return result