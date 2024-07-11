def concatenate(strings: List[str]) -> str:
    if len(strings) == 0:
        return ""
    result = ''
    for string in strings:
        result += string
    return result