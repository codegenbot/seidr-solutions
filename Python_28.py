def concatenate(strings: List[str]) -> str:
    if not strings:
        return ""
    result = ""
    for string in strings:
        result += string + " "
    return result.strip()