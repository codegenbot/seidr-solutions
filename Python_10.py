def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s + s
    
    result = list(s)
    while result[0] != result[-1]:
        result.insert(0, result.pop())
    
    return ''.join(result)