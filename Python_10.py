```
def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s
    palindrome = s + s[::-1]
    half_len = len(palindrome) // 2
    if len(palindrome) % 2 != 0:
        palindrome = s[:half_len+1] + s[-1::-1][:half_len][::-1]
    else:
        palindrome = s + s[-1::-1]
    return palindrome

print(make_palindrome("madam"))  
print(make_palindrome("hello"))