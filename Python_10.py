```
def make_palindrome(s):
    if len(s) == 0:
        return ""

    palindrome = s
    i, j = 0, len(s) - 1
    while i <= j:
        if s[i] != s[j]:
            for k in range(j+1, len(s)):
                if s[i] == s[k]:
                    j = k
                    break
        palindrome += s[i]
        i += 1
        j -= 1

    return palindrome + s[i-1::-1]