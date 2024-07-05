def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[0].lower() + string