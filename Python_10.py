def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s + s
    
    result = list(s)
    
    mid = len(result) // 2
    for i in range(len(s), mid, -1):
        if s[-1] != result[-i-1]:
            result.insert(-i, s[-1])
    
    return ''.join(result)