def make_palindrome(string: str) -> str:
    if len(string) == 0:
        return ""
    prefix = ""
    while len(string) > 1 and not is_palindrome(prefix + string[0] + string[-1]):
        prefix += string[0]
        string = string[1:-1]
    return prefix + string[0] + string[-1] + prefix[::-1]


def is_palindrome(s):
    return s == s[::-1]