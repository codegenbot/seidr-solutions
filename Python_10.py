def make_palindrome(string: str) -> str:
    suffix = ""
    while string != string[::-1]:
        suffix = string[0] + suffix
        string = string[1:]
    return string + suffix