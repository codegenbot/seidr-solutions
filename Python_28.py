def concatenate(strings: list) -> str:
    if not strings:
        return ""
    return "".join(map(str, strings)).strip()