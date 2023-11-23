def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string

    suffix = ""
    while True:
        if string + suffix == (string + suffix)[::-1]:
            break
        if string:
            suffix = string[0] + suffix
            string = string[1:]
        else:
            suffix = ""
            break
    return string + suffix