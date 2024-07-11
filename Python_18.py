```
def how_many_times(string: str, substring: str) -> int:
    return len([s for s in range(len(string)) if string.startswith(substring, s)])