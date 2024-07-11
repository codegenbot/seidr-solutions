def make_palindrome(s: str) -> str:
    s = list(s)
    i, j = 0, len(s) - 1
    while i < j:
        if s[i] != s[j]:
            t = s[j]
            s.insert(0, t)
            s.append(t)
        i += 1
        j -= 1
    return "".join(s)