def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    for i in range(len(string) - 1, -1, -1):
        if is_palindrome(string[: i + 1]):
            return string[: i + 1] + string[i:-1][::-1]