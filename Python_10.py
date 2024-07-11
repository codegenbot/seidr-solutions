def make_palindrome(s: str) -> str:
    s = list(s)
    left, right = 0, len(s) - 1
    
    while right > left:
        if s[left] != s[right]:
            if s[0] == s[right]:  
                s.pop()               
                right -= 1            
            elif s[-1] == s[left]:  
                s.pop()               
                left += 1            
            else:
                s.insert(0, s.pop(right))  
        else:
            left += 1
            right -= 1
            
    return "".join(s)