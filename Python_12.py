```
def longest(strings):
    if not strings:
        return None
    unique_strings = list(set(map(str, strings)))
    return max(unique_strings, key=len) if unique_strings else None