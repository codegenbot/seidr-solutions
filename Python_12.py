def longest(strings: List[str]) -> Optional[str]:
    if not all(isinstance(s, str) for s in strings):
        return "Invalid input type. Please enter only strings."
    if not strings:
        return None
    return max(strings, key=len)