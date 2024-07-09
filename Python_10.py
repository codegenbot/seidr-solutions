def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    i = len(string) - 1
    while i >= 0 and not string[: i + 1][: i + 1].endswith(string[: i + 1][::-1]):
        i -= 1
    return string + string[: i + 1][::-1]