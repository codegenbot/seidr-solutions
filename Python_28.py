def concatenate(strings: str) -> str:
    try:
        return "".join(sorted([s.strip() for s in strings.split(",")]))
    except ValueError:
        return "Error: Invalid input"