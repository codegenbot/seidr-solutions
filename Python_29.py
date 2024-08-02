def filter_strings(strings: List[str], prefix: str) -> List[str]:
    return [string for string in strings if string.startswith(prefix)]