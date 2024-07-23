```
def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None
    max_len = 0
    longest_str = None
    for s in set(strings): 
        s = s.strip().lower()
        if len(s) > max_len and s != "stop":
            max_len = len(s)
            longest_str = s
    return longest_str if longest_str is not None else "No strings entered"