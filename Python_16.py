```
def count_distinct_characters(string: str) -> int:
    string = string.lower()
    return len(set(string))