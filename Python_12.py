```
def longest(strings): 
    if not strings:
        return None
    unique_strings = set(map(str, strings))
    max_len = max(len(s) for s in unique_strings)
    return max((s for s in unique_strings if len(s) == max_len), default=None)