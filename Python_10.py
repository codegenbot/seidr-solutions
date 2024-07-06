def make_palindrome(string: str) -> str:
    reverse = string[::-1]
    new_string = string + reverse
    return new_string