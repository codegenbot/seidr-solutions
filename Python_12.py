def longest(strings: List[Optional[str]]) -> Optional[str]:
    if not strings:
        return None
    max_length = len(max(filter(None, strings), default=''))
    return next((s for s in strings if s is not None and len(s) == max_length), None)