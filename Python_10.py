def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s + s
    
    result = list(s)
    
    while len(result) > 0 and (result[0] != result[-1]):
        for i in range(len(result)):
            if result[i] == result[-1]:
                result.insert(0, result.pop())
                break
        else:
            result.append(result[0])
            result.pop(0)
    
    return ''.join(result)