def make_palindrome(string: str) -> str:
    suffix = ""
    while string[:len(suffix)] != suffix[::-1]:
        suffix += string[-1]
    return string + suffix[::-1]