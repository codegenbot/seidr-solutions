def make_palindrome(s: str) -> str:
    for i in range(len(s)):
        for char in [s[i].lower(), s[i].upper()]:
            new_s = s[:i] + char * 2 + s[i:][::-1]
            if new_s == new_s[::-1]:
                return new_s
    return ""