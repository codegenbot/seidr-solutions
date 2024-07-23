def longest(strings):
    if not strings:
        return None
    return sorted(map(str, set(strings)), key=len, reverse=True)