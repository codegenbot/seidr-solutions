def concatenate(strings: List[str]) -> str:
    if not isinstance(strings, list):
        return None
    result = ""
    for s in strings:
        if not isinstance(s, str):
            return None
        result += s
    return result