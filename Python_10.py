def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.is_palindrome():
        return string + string[::-1]
    else:
        length = 0
        i = len(string)
        while i > 0 and not string[:i].is_palindrome():
            i -= 1
        return string[:i] + string[i:][::-1]