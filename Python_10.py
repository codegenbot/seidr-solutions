```
def make_palindrome(s: str) -> str:
    s = list(s)
    left, right = 0, len(s) - 1
    
    while right > left:
        if s[left] != s[right]:
            while s[0] != s[right]: 
                s.insert(0, s.pop())
            s.pop(right)
        else:
            left += 1
            right -= 1
            
    return "".join(s)