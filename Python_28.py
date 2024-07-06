```
def concatenate(strings: list[str]) -> str:
    return ' '.join([' '.join(s.split()) for s in strings]).lower()