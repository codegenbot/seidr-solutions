```
def longest(strings):
    if not strings:
        return None
    return ''.join(map(str, sorted(set(map(str, strings)), key=lambda x: len(x), reverse=True)))