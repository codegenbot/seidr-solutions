```python
def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s
    t = list(s)
    l, r = 0, len(t) - 1
    while l < r and l + 1 <= r - l:
        if t[0] != t[r - 1]:
            mid = (l + r) // 2
            t.pop(r), t.insert(mid, t[0])
            l += 1
            r -= 1
        else:
            l, r = l + 1, r - 1
    while t:
        if t[0] == t[-1]:
            t.append(t.pop(0))
        elif len(t) > len(s):
            t.insert(0, t.pop())
        else:
            t.append(t.pop())
    return "".join(t)