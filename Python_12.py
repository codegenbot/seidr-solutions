def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    longest_string = max(strings, key=len)
    return next(filter(lambda x: len(x) == len(longest_string), strings))