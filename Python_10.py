```
def make_palindrome():
    s = input("Enter a string: ")
    if not s:
        return ""
    
    while len(s) < 2 or s[0].lower() != s[-1].lower():
        c = s[0].lower()
        if c in s[1:]:
            s = s[1:].replace(c, c*2) + s[0].upper()
        else:
            s = s[-1] + s
    return ''.join(s)

print(make_palindrome())