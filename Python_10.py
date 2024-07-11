```
def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s
    for i in range(len(s), 0, -1):
        for j in range(len(s), i, -1):
            substring = s[:j][::-1] + s + s[i-1:]
            if substring == substring[::-1]:
                return substring