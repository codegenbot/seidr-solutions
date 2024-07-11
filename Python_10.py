def make_palindrome(s: str) -> str:
    s = s.lower()
    for i in range(len(s)):
        for j in range(i + 1, len(s) + 1):
            substring = s[i:j]
            if substring == substring[::-1]:
                return substring