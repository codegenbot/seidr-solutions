def make_palindrome(string: str) -> str:
    prefix = ""
    while string != string[::-1]:
        prefix += string[-1]
        string = string[:-1]
    return string + prefix + string[::-1]