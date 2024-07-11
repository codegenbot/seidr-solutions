```
def make_palindrome(s: str) -> str:
    s = list(s)
    left, right = 0, len(s) - 1
    while left < right:
        if s[left] != s[right]:
            middle = (right + left) // 2
            return ''.join(s + list(s)[::-1])
        left += 1
        right -= 1
    return ''.join(s)