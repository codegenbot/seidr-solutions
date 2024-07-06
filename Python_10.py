def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    suffix = string[::-1]
    for i in range(len(suffix)):
        if is_palindrome(suffix[: i + 1]):
            return string + suffix[i + 1 :][::-1]
    return string