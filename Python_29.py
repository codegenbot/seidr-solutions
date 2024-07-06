
def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return list(filter(lambda s: s.startswith(prefix), strings))