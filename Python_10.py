def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    for i in range(len(string)):
        half = string[: i + 1]
        second_half = string[i:]
        if is_palindrome(half) and is_palindrome(second_half):
            return half + second_half[::-1]
    return string