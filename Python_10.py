def make_palindrome(s: str) -> str:
    s = list(s)
    i, j = 0, len(s) - 1
    while i < j:
        if s[i] != s[j]:
            t = s[j]
            for k in range(len(s) - 1, -1, -1):
                if s[k] == t:
                    s[k + 1 :] = list(t * (len(s) - k - 1))
                    break
            else:
                s[: j + 1] = list(t * (j + 1))
        i += 1
        j -= 1
    return "".join(s)