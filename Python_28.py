def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        if string:
            result += string
    return result