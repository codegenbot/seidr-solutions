def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    s = string.lower()
    for i in range(len(s), 0, -1):
        if not is_palindrome(s[:i]):
            break
    suffix = s[:i][::-1]
    prefix = s[i:][::-1]
    return string + suffix + prefix