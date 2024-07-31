```
def longest(strings: List[str]) -> Optional[str]:
    return next(iter(sorted(strings, key=len, reverse=True)), None)