def make_palindrome(s: str) -> str:
    for i in range(len(s)):
        new_s = s[:i] + s[i].lower() * 2 + s[:i][::-1] + s[i+1:]
        if new_s == new_s[::-1]:
            return new_s
    return ""