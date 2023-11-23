def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string

    prefix = ""
    while string != string[::-1]:
        if string:
            prefix = string[0] + prefix
            string = string[1:]
        else:
            break
    return prefix + string + prefix[::-1]