def make_palindrome(s: str) -> str:
    s = s.lower()
    for i in range(len(s)):
        new_s = s[:i] + s[i] * 2 + s[:i][::-1] + s[i+1:]
        if new_s == new_s[::-1]:
            return new_s
    return ""