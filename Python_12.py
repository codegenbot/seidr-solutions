```
def longest(strings: list[str]) -> str:
    if not strings:
        return None
    max_len = 0
    for s in strings:
        if len(s) > max_len:
            max_len = len(s)
        elif len(s) == max_len and s != "stop":
            return s
    return "No strings entered"