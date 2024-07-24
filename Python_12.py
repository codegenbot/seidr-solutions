```
def longest(strings: List[str]) -> Optional[str]:
    return next((s for s in strings if len(s) == max(map(len, strings))), None)