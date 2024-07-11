```
def concatenate(strings: List[str]) -> str:
    if not isinstance(strings, list):
        return "Invalid input. Please enter a list of strings."
    for s in strings:
        if not isinstance(s, str):
            return "Invalid input. The list must contain only strings."
    result = ""
    for s in strings:
        result += s
    return result