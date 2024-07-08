def is_palindrome(s: str) -> bool:
    return s == s[::-1]


def make_palindrome(string: str) -> str:
    if not string:
        return ""

    prefix = ""
    while len(string) > 0 and not is_palindrome(prefix + string[0]):
        prefix += string[0]
        string = string[:-1] if string[0] == string[-1] else string[1:]

    return prefix + string + prefix[::-1]