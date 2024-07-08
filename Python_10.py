def make_palindrome(s):
    if len(s) == 0:
        return ""

    palindrome = s
    while i < len(s) // 2:  # for odd length strings
        if s[i] != s[-i - 1]:
            if len(s) % 2 == 0:
                palindrome += s[i]
            else:
                palindrome += s[0]

    return palindrome + "".join(reversed(s))