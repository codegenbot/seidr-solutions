def make_palindrome(s: str) -> str:
    for i in range(len(s), 0, -1):
        if s[:i] == s[:i][::-1]:
            mid = len(s) // 2
            return s[:mid].lower() + s[mid].upper() + s[:i][::-1].lower()