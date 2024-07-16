def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    s = string.lower()
    i = len(s) - 1
    while i >= 0 and s[0] != s[i]:
        i -= 1
    palindrome_part = s[: i + 1]
    remaining_string = s[i + 1 :]
    return palindrome_part + palindrome_part[::-1]