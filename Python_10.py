def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s
    t = list(s)
    l, r = 0, len(t)-1
    while l < r:
        if t[l] != t[r]:
            mid = (l + r) // 2
            if t[0] != t[-1]: 
                t.pop(0), t.insert(mid, s[0])
            else: 
                t.pop(), t.insert(l+1, s[-1])
            l, r = l+1, len(t)-1
        else:
            l, r = l+1, r-1
    return "".join(t)