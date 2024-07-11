```python
def make_palindrome(s: str) -> str:
    s = list(s)
    i, j = 0, len(s) - 1
    while i < j:
        if s[i] != s[j]:
            t = s.pop(j)
            s.insert(0, t)
        else:
            i += 1
            j -= 1
    return "".join(s)