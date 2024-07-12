def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    for char in string:
        if is_palindrome(char + string):
            return (char + string)[::-1]