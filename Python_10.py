def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string

    suffix = ""
    while len(string) > 0 and string != string[::-1]:
        suffix = string[0] + suffix
        string = string[1:]
    return string + suffix