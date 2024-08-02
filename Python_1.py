def find_characters(s: str, char: str) -> List[int]:
    result = []
    for i in range(len(s)):
        if s[i] == char:
            result.append(i)
    return result