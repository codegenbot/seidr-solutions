def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s
    for i in range(len(s), 0, -1):
        new_s = s + s[i - 1]
        if new_s == new_s[::-1]:
            return new_s