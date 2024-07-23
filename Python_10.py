def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s
    while s != s[::-1]:
        if len(s) % 2 == 0:
            s = s[: len(s) // 2] + s[len(s) // 2] + s[0]
        else:
            s = s[: len(s) // 2] + s[len(s) // 2] + s[0] + s[-1]
    return s


print(make_palindrome("madam"))
print(make_palindrome("hello"))