def make_palindrome(string: str) -> str:
    return string + string[::-1][::-1] [len(string):]