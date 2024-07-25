def make_palindrome(s):
    result = ""
    i, j = len(s) // 2 - 1, len(s) // 2
    while i >= 0 and j < len(s):
        if s[i].isalpha() and s[j].isalpha():
            if s[i].lower() == s[j].lower():
                result += s[i] * 2
                i -= 1
                j += 1
            else:
                if s[i].isupper():
                    result = s[i] + result
                    i -= 1
                else:
                    result = s[j] + result
                    j += 1
        elif s[i].isalpha():
            result = s[i] + result
            i -= 1
        elif s[j].isalpha():
            result = s[j] + result
            j += 1
        else:
            if s[i] != s[j]:
                return "Invalid input"
            i -= 1
            j += 1
    return result