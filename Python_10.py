def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    for i in range(len(string)):
        half = string[: i + 1]
        second_half = string[i:]
        if is_palindrome(half + "".join(reversed(second_half))):
            return half + "".join(reversed(second_half))