```Python
def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s + s[::-1]
    else:
        return s + s[::-1]

print(make_palindrome("madam"))  
print(make_palindrome("hello"))