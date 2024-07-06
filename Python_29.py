```
def filter_by_prefix(strings: list[str], prefix: str) -> list[str]:
    filtered_strings = []
    for s in strings:
        if s.startswith(prefix):
            filtered_strings.append(s)
    return filtered_strings