def make_palindrome(s: str) -> str:
    s = list(s)
    i, j = 0, len(s) - 1
    while i < j:
        if s[i] != s[j]:
            for k in range(len(s), i, -1):
                if s[k-1] == s[j]:
                    s.insert(i, s.pop(j))
                    break
            else:
                s.insert(0, s.pop())
        i += 1
        j -= 1
    return "".join(s)