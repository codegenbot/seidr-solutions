```
def concatenate(strings: list) -> str:
    if not strings:
        return ""
    result = " ".join(map(str, strings))
    return result