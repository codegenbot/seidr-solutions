```Python
def make_palindrome(s: str) -> str:
    s = list(s)
    i, j = 0, len(s) - 1
    while i < j:
        if s[i] != s[j]:
            for _ in range(len(s)):
                s.insert(0, s.pop())
                if s[i] == s[j]:
                    break
        i += 1
        j -= 1
    return ''.join(s)