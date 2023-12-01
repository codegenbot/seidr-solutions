def make_palindrome(string: str) -> str:
    suffix = string
    while suffix:
        if is_palindrome(suffix):
            prefix = string[:len(string) - len(suffix)][::-1]
            return string + prefix
        suffix = suffix[1:]
    return string