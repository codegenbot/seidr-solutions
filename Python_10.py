def make_palindrome(string: str) -> str:
    idx = len(string)
    while idx > 0:
        if is_palindrome(string[:idx]):
            break
        idx -= 1
    return string + string[:idx][::-1]