```
def make_palindrome(s: str) -> str:
    s = list(s)
    
    left, right = 0, len(s) - 1
    
    while right > left:
        if s[left] != s[right]:
            # Find the first matching character from the right
            for i in range(len(s), 0, -1):
                if s[i-1] == s[left]:
                    s.pop(i-1)
                    break
            
        else:
            left += 1
            right -= 1
            
    return "".join(s)