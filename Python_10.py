```
def make_palindrome(s1, s2):
    result = ""
    i, j = len(s1) - 1, len(s2) - 1
    while i >= 0 or j >= 0:
        if i >= 0 and j >= 0:
            if s1[i] == s2[j]:
                result += s1[i]
                i -= 1
                j -= 1
            else:
                if i >= 0:
                    result += s1[i]
                    i -= 1
                else:
                    result += s2[j]
                    j -= 1
        elif i >= 0:
            result += s1[i]
            i -= 1
        else:
            result += s2[j]
            j -= 1
    return result + "".join(reversed(s1[:i+1]+s2[:j+1]))
print(make_palindrome("jerry", "rrej"))