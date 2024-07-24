def is_palindrome(s: str) -> bool:
    return s == s[::-1]

def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    for i in range(len(string), 0, -1):
        if is_palindrome(string[:i]):
            palindrome_suffix = string[:i - 1][::-1]
            return string + palindrome_suffix
    return string + string[:-1][::-1]