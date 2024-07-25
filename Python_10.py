```
def make_palindrome(s):
    result = ""
    i, j = 0, len(s) - 1
    while i <= j:
        if s[i].isalpha() and s[j].isalpha():
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
            pass 
        else:
            if i == j: 
                result += s[i]  
            elif (i > 0 and not s[i-1].isalpha()) or (j < len(s)-1 and not s[j+1].isalpha()):
                pass 
            else:
                if i == j: 
                    result += s[i]  
                elif (i > 0 and not s[i-1].isalpha()) or (j < len(s)-1 and not s[j+1].isalpha()):
                    pass 
        if i != j:
            if not s[i].isalpha():
                result += s[i]
                i += 1
            elif not s[j].isalpha():
                result += s[j]
                j -= 1
    return result