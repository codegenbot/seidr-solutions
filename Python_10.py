def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    else:
        return string + string[::-1].lstrip('0') if string[0] == '0' else string + string[::-1]