def make_palindrome(string: str) -> str:
    i = len(string)
    while i > 0 and not is_palindrome(string[:i]):
        i -= 1
    return string + string[:i][::-1]