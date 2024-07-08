def make_palindrome(string: str) -> str:
    return string if string == string[::-1] else string + string[::-1][1:]