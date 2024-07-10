def all_prefixes(s: str) -> list:
    return [s[:i] for i in range(1, len(s) + 1)]