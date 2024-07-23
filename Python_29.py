def filter_by_prefix(strings: list[str], prefix: str) -> list[str]:
    if not all(isinstance(s, str) for s in strings):
        return "Invalid input"
    elif not isinstance(prefix, str):
        return "Invalid prefix"
    else:
        return [s for s in strings if s.startswith(prefix)]