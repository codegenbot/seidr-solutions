def is_palindrome(s):
    return s == s[::-1]


def make_palindrome(s):
    if s == s[::-1]:
        return s + s
    for i in range(len(s)):
        if s[: i + 1] == s[: i + 1][::-1]:
            return s[: i + 1] + s[i:][::-1]
    return s + s[::-1]