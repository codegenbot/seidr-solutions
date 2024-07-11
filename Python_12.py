```
def longest(strings: list[str]) -> str | None:
    if not strings:
        return None
    return max(strings, key=len)