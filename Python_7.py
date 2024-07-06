```
def filter_by_substring(strings: list[str], substring: str) -> list:
    if not all(isinstance(s, str) for s in strings):
        return "Error: All elements in the input list must be strings."
    return [s for s in strings if substring in s]