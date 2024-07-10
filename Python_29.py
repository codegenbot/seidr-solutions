def filter_strings(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]