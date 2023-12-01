def make_palindrome(string: str) -> str:
    i = len(string)
    while i >= 0:
        if is_palindrome(string[i:]):
            return string + string[:i][::-1]
        i -= 1
    return string