def longest(strings):
    if len(strings) == 0:
        return None
    else:
        return max(strings, key=len)