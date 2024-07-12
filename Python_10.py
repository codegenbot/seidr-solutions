def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    for i in range(len(string)):
        half = string[: i + 1]
        second_half = string[i:]
        rev_second_half = second_half[::-1]
        if half + rev_second_half == half + rev_second_half[: len(half)] + (
            second_half[len(half)] if len(half) < len(second_half) else ""
        ):
            return half + rev_second_half