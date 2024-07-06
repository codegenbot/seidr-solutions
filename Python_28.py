```
def concatenate(strings: list[str]) -> str:
    return "".join([s.strip() for s in strings])