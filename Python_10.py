def is_noun(word: str) -> bool:
    return word.istitle() or word.startswith(("Mr.", "Mrs.", "Ms.", "Dr."))