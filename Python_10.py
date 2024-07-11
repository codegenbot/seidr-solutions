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
                max_count = max((s.count(c) for c in set(s)))[0]
                if max_count > 1:
                    while s.count(s[0]) > 1: 
                        s.remove(s[0])
                else:
                    s.pop(left)
                right -= 1
        else:
            left += 1
            right -= 1
            
    return "".join(s)