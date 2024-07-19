def complete_code(string: str, i: int) -> str:
    return string + string[: i + 1][::-1] if i >= 0 else string[:-1][::-1] + string[:]