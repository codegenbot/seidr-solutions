def longest_word(string: str) -> str:
    if not string:
        return ""
    return max(string.split(), key=len)