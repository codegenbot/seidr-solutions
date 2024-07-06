def filter_by_prefix(strings: list[str], prefix: str) -> list[str]:
    return [string for string in strings if string.startswith(prefix)]