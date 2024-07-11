```
def concatenate(strings: str) -> str:
    try:
        result = [s.strip() for s in strings.split(",")]
        return ", ".join(sorted(map(str,set(result)))))
    except ValueError:
        return "Error: Invalid input"