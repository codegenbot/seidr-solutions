def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string

    suffix = ""
    for i in range(len(string), 0, -1):
        if is_palindrome(string[:i]):
            suffix = string[i:]
            break

    prefix = string[: len(suffix)]
    return string + prefix[::-1]