def select_words(s: str, n: int) -> List[str]:
    words = s.split()
    return [word for word in words if len(word) == n and word.isalpha()]

# OR

def select_words(s: str, n: int) -> List[str]:
    return list(filter(lambda x: len(x) == n and x.isalpha(), s.split()))