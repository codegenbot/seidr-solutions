def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s
    else:
        while not (s[0] + s + s[-1]) == (s[0] + s + s[-1])[:-1][::-1]:
            s = s[0] + s + s[-1]
        return s