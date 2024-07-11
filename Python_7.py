def filter_strings(strings: list[str], substring: str) -> list[str]:
    return [s for s in strings if substring in s]