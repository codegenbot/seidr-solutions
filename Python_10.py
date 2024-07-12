```
def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s
    for char in s:
        if s[:len(s)-1].replace(char, "") == (s[:len(s)-1].replace(char, ""))[::-1] and s[1:].replace(char, "") == (s[1:]).replace(char, "")[::-1]:
            return char + s + s[::-1]
    if len(s) % 2 == 0:
        half = s[:len(s)//2]
        return half + half[::-1]
    else:
        return s + s[::-1]