```
def concatenate(strings: List[str]) -> str:
    if not strings:
        return ""
    return "".join(map(str, strings))