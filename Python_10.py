def make_palindrome(s):
    if len(s) == 0:
        return ""

    s = list(s)
    i, j = 0, len(s) - 1
    palindrome = []

    while i <= j:
        if s[i] == s[j]:
            palindrome.append(s[i])
            i += 1
            j -= 1
        else:
            palindrome = s[:i+1] + ''.join(reversed(s[i:j])) + s[j:]
            break
    if i <= j:
        palindrome += ''.join(reversed(s[i:j+1]))

    return ''.join(palindrome)