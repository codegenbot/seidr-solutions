def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    reverse_string = string[::-1]
    return "".join(list(string) + list(reverse_string))