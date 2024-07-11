```Python
def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s + s
    
    result = list(s)
    
    left, right = 0, len(result) - 1
    while left < right:
        result.insert(right, result.pop(left))
        left += 1
        right -= 1
    
    if not is_palindrome(''.join(result)):
        to_add = ''.join(result)[::-1]
        return ''.join(result) + to_add

def is_palindrome(s: str) -> bool:
    return s == s[::-1]

print(make_palindrome("jerry"))