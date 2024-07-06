
def select_words(s: str, n: int) -> List[str]:
    words = s.split()
    if n == 1:
        return [word for word in words if word.islower()]
    else:
        return [
            word for word in words if len([c for c in word[1:] if c.islower()]) == n
        ]
