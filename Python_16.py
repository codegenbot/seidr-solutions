def count_distinct_characters(string: str) -> int:
    return len(set(c.lower() for c in string))