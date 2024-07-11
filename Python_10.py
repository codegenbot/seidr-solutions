```
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
    while s_list = list(s):
        if s_list[0] == t[-1]:
            t.append(s_list.pop(0))
        elif len(s_list) > len(t):
            t.insert(0, s_list.pop(0))
        else:
            t.append(s_list.pop())
    return "".join(t)