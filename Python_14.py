def prefixes(string: str) -> List[str]:
    return [string[: i + 1] for i in range(len(string)]

def suffixes(string: str) -> List[str]:
    return [string[i:] for i in range(len(string)]

def substrings(string: str) -> List[str]:
    return [string[i: j] for i in range(len(string)) for j in range(i + 1, len(string) + 1)]

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def test() -> None:
    assert prefixes("abc") == ["a", "ab", "abc"]
    assert suffixes("abc") == ["abc", "bc", "c"]
    assert substrings("abc") == ["a", "ab", "abc", "b", "bc", "c"]
    assert is_palindrome("abc") == False
    assert is_palindrome("aba") == True
    assert is_palindrome("abba") == True
    assert is_palindrome("abcba") == True
    print("PASSED")

if __name__ == "__main__":
    test()