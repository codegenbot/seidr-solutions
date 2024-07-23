```Python
def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s
    if len(s) < len(s + s[::-1]):
        palindrome = s[::-1] + s
    else:
        palindrome = s + s[::-1]
    return palindrome

print(make_palindrome("madam"))  
print(make_palindrome("hello"))