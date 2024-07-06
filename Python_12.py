```
def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    for s in strings:
        if not isinstance(s, str):
            raise ValueError("Expected a list of strings")
    max_len = 0
    result = ''
    for s in strings:
        if not s.isalnum():
            continue
        if len(s) > max_len:
            max_len = len(s)
            result = s
    return result