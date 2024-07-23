def concatenate(strings: List[str]) -> str:
    result = ""
    for s in strings:
        if len(s) > 5:
            result += s.upper() + " "
        else:
            result += s.lower() + " "
    return result.strip()