def separate_paren_groups(paren_string: str) -> List[str]:
    result = paren_string.split(")(")
    if len(result) > 1:
        result[0] += ")"
        result[-1] = "(" + result[-1]
    return result