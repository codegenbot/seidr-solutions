```
def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s
    t = list(s)
    l, r = 0, len(t)-1
    while l < r:
        if t[l] != t[r]:
            mid = (l + r) // 2
            for i in range(len(s)-1, -1, -1):
                if s[i] == t[r]: 
                    t.insert(mid, s[i])
                    break
            l, r = l+1, len(t)-1
        else:
            l, r = l+1, r-1
    return "".join(t)