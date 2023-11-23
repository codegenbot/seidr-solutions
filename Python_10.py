def make_palindrome(string: str) -> str:
    def is_palindrome(s: str) -> bool:
        return s == s[::-1]

    for i in range(len(string)-1, -1, -1):
        suffix = string[i:]
        if is_palindrome(suffix):
            return string + suffix[::-1]

    return string