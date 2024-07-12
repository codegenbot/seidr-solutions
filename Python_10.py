def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    for char in range(len(string)):
        half = string[: char + 1]
        second_half = string[char:][::-1]
        if half + second_half == (half + second_half)[::-1]:
            return half + second_half