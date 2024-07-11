def make_palindrome(s: str) -> str:
    s = list(s)
    i, j = 0, len(s) - 1
    while i < j:
        if s[i] != s[j]:
            for k in range(len(s) - 1, j, -1):
                if s[k] == s[j]:
                    s[k + 1:j+1] = list(s[j]*abs(j-i))
                    break
        i += 1
        j -= 1
    return "".join(s)