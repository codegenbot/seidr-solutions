```
def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        result = list(s)
    else:
        mid = len(result) // 2
        for i in range(len(result) - 1, mid, -1):
            while result[0] != result[i]:
                result.insert(0, result.pop())
    
    return ''.join(result)