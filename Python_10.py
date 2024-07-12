```Python
def make_palindrome(s: str) -> str:
    s = s.strip()
    while not is_palindrome(s):
        if len(s) % 2 == 0:
            s = s[1:-1]
        elif s[0] == s[-1]:
            s = s[1:-1]
        else:
            s = s[1] + s[0] + s[-1]
    return s

def is_palindrome(s: str) -> bool:
    return s == s[::-1]