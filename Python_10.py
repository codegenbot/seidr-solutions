def make_palindrome(s: str) -> str:
    s = list(s)
    i, j = 0, len(s) - 1
    while i < j:
        if s[i] != s[j]:
            if s[0] == s[j]:
                s.pop()
            elif s[-1] == s[i]:
                s.pop(j)
            else:
                s.insert(0, s[j])
                s.pop(j)
            break
        i += 1
        j -= 1
    return ''.join(s)