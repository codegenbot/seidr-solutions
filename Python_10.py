```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if not string.islower():
        string = string.lower()
    s = list(string)
    left, right = 0, len(s) - 1
    while left < right:
        if s[left] != s[right]:
            s.insert(len(s), s.pop(right))
            break
        left += 1
        right -= 1
    return ''.join(s).lower() + ''.join(s)[::-1].upper()