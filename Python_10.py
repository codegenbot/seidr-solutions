def make_palindrome(s):
    if len(s) == 0:
        return ""

    palindrome = s
    i = 0
    while i < len(s) // 2:
        if s[i] != s[-i - 1]:
            if len(s) % 2 == 0:
                palindrome += s[i]
            else:
                palindrome += s[0]

    return palindrome + "".join(reversed(s))