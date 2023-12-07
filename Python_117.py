def select_words(s: str, n: int) -> list[str]:
    return [word for word in s.split() if len(word) == n and word.isalpha()]