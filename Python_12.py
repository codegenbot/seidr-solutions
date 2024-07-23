```
def longest(strings):
    if not strings:
        return None
    return max(map(str, set(strings)), key=len)