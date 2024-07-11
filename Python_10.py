def make_palindrome(s: str) -> str:
    s = list(s)
    i, j = 0, len(s) - 1
    while i < j:
        if s[i] != s[j]:
            while i < j and s[i] != s[j]:
                s[j] = s[i]
                i += 1
                j -= 1
            return ''.join(s)
        else:
            i += 1
            j -= 1
    return ''.join(s)