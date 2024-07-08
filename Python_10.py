def make_palindrome(s):
    if len(s) == 0:
        return ""

    palindrome = ""
    i, j = 0, len(s) - 1
    while i <= j:
        if s[i] != s[j]:
            palindrome += s[i]
        else:
            palindrome += s[i]
            i += 1
            j -= 1
        palindrome += s[i]
        i += 1
        j -= 1

    return palindrome