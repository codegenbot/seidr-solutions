def prefixes(string: str) -> List[str]:
    return [string[:i + 1] for i in range(len(string))]

def suffixes(string: str) -> List[str]:
    return [string[i:] for i in range(len(string))]

def substrings(string: str) -> List[str]:
    return [string[i:j] for i in range(len(string)) for j in range(i + 1, len(string) + 1)]

def is_palindrome(string: str) -> bool:
    return string == string[::-1]