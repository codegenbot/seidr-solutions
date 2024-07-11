def make_palindrome(s: str) -> str:
    s = list(s)
    i, j = 0, len(s) - 1
    while i < j:
        if s[i] != s[j]:
            t = s[j]
            for k in range(j, i, -1):
                if s[k] == t:
                    s[i : k + 1] = list(t * (k - i + 1))
                    break
            else:
                s[i : j + 1] = list(t * (j - i + 1))
        i += 1
        j -= 1
    return "".join(s)