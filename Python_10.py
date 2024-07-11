def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s + s
    
    result = [char for char in s]
    
    left, right = 0, len(result) - 1
    while left < right:
        result.insert(right, result.pop(left))
        left += 1
        right -= 1
    
    return ''.join(result)