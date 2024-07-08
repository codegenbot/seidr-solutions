def make_palindrome(string: str) -> str:
    if len(string) == 0:
        return ""

    prefix = string[0]
    suffix = string[-1]

    while not is_palindrome(prefix + suffix):
        prefix += string[0]
        suffix = string[-1] + suffix

    return prefix + suffix