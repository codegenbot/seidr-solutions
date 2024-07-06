```
def concatenate(strings: list[str]) -> str:
    return ' '.join(sorted([s.strip() for s in strings]))