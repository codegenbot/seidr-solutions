```
def make_palindrome(s: str) -> str:
    for i in range(len(s)):
        new_s = s[:i+1]
        while len(new_s) < len(s):
            new_s += s[len(s)-len(new_s):]
            if new_s == new_s[::-1]:
                return new_s