```
def make_palindrome(s):
    if len(s) == 0:
        return ""

    s = list(s)
    i, j = 0, len(s) - 1

    while i <= j:
        palindrome = s[:i+1] + "".join(reversed(s[i+1:j+1])) + s[j:][::-1]
        i += 1
        j -= 1

    return palindrome