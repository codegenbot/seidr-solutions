def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s
    else:
        for i in range(len(s)):
            for j in range(i + 1, len(s) + 1):
                sub = s[i:j]
                if sub == sub[::-1] and len(sub) > len(make_palindrome(s[:i]).replace("a", "")):
                    return sub
    return s