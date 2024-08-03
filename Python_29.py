def filter_by_prefix(strings: list[str], prefix: str) -> list[str]:
    return [s for s in strings if s.startswith(prefix)]