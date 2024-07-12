def longest() -> Optional[str]:
    strings = input().split()
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))