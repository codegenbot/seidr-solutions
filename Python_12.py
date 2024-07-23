```
def longest(strings: list[str]) -> str:
    if not strings:
        return "No strings entered"
    max_len = 0
    longest_strs = []
    for s in strings:
        if len(s) > max_len:
            max_len = len(s)
            longest_strs = [s]
        elif len(s) == max_len and s != "stop":
            longest_strs.append(s)
    return random.choice(longest_strs) if longest_strs else None