```python
def filter_by_substring(strings: list[str], substring: str) -> list[str]:
    return [s for s in strings if substring in s]