def make_palindrome(s):
    result = ""
    i, j = 0, len(s) - 1
    while i <= j:
        if i == j:
            result += s[i]
        elif s[i].isalpha() and s[j].isalpha():
            if s[i].lower() == s[j].lower():
                result += s[i] * 2
                i += 1
                j -= 1
            else:
                if s[i].isupper():
                    result += s[i]
                    i += 1
                else:
                    result += s[j]
                    j -= 1
        elif s[i].isalpha():
            result += s[i]
            i += 1
        elif s[j].isalpha():
            result += s[j]
            j -= 1
        else:
            if s[i] != s[j]:
                return "Invalid input"
            i += 1
            j -= 1
    if i == j:
        result += s[i]
    elif s[i].isalpha() and not s[j].isalpha():
        result += s[i]
        i += 1
    else:
        if s[i].isalpha():
            result += s[i]
            i += 1
        else:
            result += s[j]
            j -= 1
    return result