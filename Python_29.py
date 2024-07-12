from typing import list, str

def filter_by_prefix(strings: list, prefix: str) -> list:
    return [s for s in strings if s.startswith(prefix)]