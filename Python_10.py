```
def make_palindrome(s: str) -> str:
    s = list(s)
    while len(s) < 2 or s[0] != s[-1]:
        if len(s) % 2 == 0:
            mid = len(s) // 2
            s.insert(mid, s[-1])
        else:
            s.append(s[0])
            s.insert(0, s[0])
    return "".join(s)