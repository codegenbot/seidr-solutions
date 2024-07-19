def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current = ""
    for char in paren_string:
        if char in ["(", ")"]:
            current += char
            if current.count("(") == current.count(")"):
                result.append(current)
                current = ""
    return result