def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [word for word in strings if word.startswith(prefix)]