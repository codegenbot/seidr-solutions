def make_palindrome(string: str) -> str:
    return string + "".join(reversed(string))