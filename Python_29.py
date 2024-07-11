```
def filter_by_prefix(strings: List[str], prefix: str) -> None:
    for s in strings:
        if s.startswith(prefix):
            print(s)
    if not any(s.startswith(prefix) for s in strings):
        print("No strings match the given prefix.")