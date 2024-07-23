```Python
def longest(strings: list[str]) -> str:
    if not strings:
        return None
    max_len = 0
    longest_strs = []
    for s in strings:
        if len(s) > max_len:
            max_len = len(s)
            longest_strs = [s]
        elif len(s) == max_len and s != "stop":
            longest_strs.append(s)
    return longest_strs[0] if longest_strs else "No strings entered"