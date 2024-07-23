```python
def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s
    palindrome = s + s[::-1].lstrip()
    return palindrome

print(make_palindrome("madam"))  
print(make_palindrome("hello")) 