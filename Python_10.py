```
def make_palindrome(s: str) -> str:
    s = list(s)
    i, j = 0, len(s) - 1
    while i < j:
        if s[i] != s[j]:
            s.reverse()
            t = s.pop(0)
            s.insert(j, t)
            j -= 1
        else:
            i += 1
            j -= 1
    return "".join(s)