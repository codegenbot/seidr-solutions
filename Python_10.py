def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s
    t = list(s)
    l, r = 0, len(t) - 1
    while l < r:
        if t[0] != t[r - 1]:
            mid = (l + r) // 2
            t.insert(0, t.pop())
        else:
            l += 1
            r -= 1
    return "".join(t)