def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if not string:
        return ""

    for i in range(len(string), -1, -1):
        if not string[:i] or is_palindrome(string[:i]):
            return string + string[i - 1 :: -1]