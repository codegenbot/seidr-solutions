def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string

    suffix = ""
    while string != string[::-1]:
        if string:
            suffix = string[0] + suffix
            string = string[1:]
        else:
            break
    return string + suffix + string[::-1]