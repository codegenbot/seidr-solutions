def concatenate(strings: str) -> str:
    result = ""
    for s in strings.split(","):
        result += s.strip()
    return "".join(sorted(result))