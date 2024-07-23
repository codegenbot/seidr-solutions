```
def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    if not prefix:
        return strings
    return [s for s in strings if s.startswith(prefix)]