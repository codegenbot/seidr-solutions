```Python
def make_palindrome(s):
    if len(s) == 0:
        return ""

    s = list(s)
    i, j = 0, len(s) - 1

    while i <= j:
        palindrome = str(s[0]) + ''.join(reversed(s[1:j+1])) + str(s[j])
        i += 1
        j -= 1

    return "".join(palindrome)