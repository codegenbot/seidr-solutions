def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        if not string:
            return "Please provide some non-empty strings"
        result += string
    return result