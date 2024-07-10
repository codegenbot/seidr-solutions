def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s
    for i in range(1, len(s) + 1):
        if s[:i] == s[:i][::-1]:
            return s[:i-1][::-1] + s
    return s + s[::-1]