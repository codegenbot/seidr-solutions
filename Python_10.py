```
def make_palindrome(s):
    if len(s) == 0:
        return ""

    s = list(s)
    i, j = 0, len(s) - 1

    while i <= j:
        if s[i] != s[j]:
            if i + 1 > j:  
                palindrome = "".join(reversed(s[:i+1])) + "".join(reversed(s[i+1:j])) + str(s[j])
            else:  
                s.insert(i, s[j])  
                i += 1
        else:
            palindrome = "".join(s[:i+1]) + s[i] + "".join(reversed(s[i+1:j])) + str(s[j])
        i += 1
        j -= 1

    return "".join(s)